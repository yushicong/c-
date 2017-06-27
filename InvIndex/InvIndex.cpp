
typedef pair<int,float> Entry;
template <class TKey>

class IncIndex : public map<TKey,list<Entry>> {

    public :
        vector<vector<TKey>> docs;
    public :
        void add(vector<TKey> & doc){

            docs.push_back(doc);
            int curDocID = docs.size() - 1;

            for (int w = 0 ; w < doc.size() ; w++){
                map<TKey,list<Entry>>::iterator it;
                it = find(doc[w]);
                if (it == index.end()){
                    list<int> newList;
                    index[doc[w]] = newList;
                    it = find(doc[w])
                }
                it -> second.push_back(curDocID);
            }
        }

        void retrieve(vector<TKey> & query,vector<int> & docIDs){
            int termNum = query.size();
            list<Entry> result;
            for (int t = 0 ;t < termNum ; t++){
                map<TKey,list<Entry>> ::iterator it;
                it = index.find(query[t]);
                if (it == end())
                    continue;
                result.merge(it -> second);
            }
            docIDs.clear();
            list<Entry>::iterator lit = result.begin();
            for (; lit != result.end() ; lit++)
                docIDs.push_back(lit -> first);
        }
};
