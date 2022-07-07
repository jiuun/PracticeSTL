using System.Diagnostics;

namespace MyList
{
    public class Data
    {
        public int num { get; set; }
    }
    public class MyList
    {
        private const int DEFAULT_CAPACITY = 4;
        static readonly Data[] emptyArray = new Data[0];
        public int Capacity { get; }
        public int Count { get; }
        private Data[] datas;

        public MyList()
        {
            datas = emptyArray;
        }

        public MyList(int capacity)
        {
            Debug.Assert(capacity >= 0);

            if (capacity == 0)
            {
                datas = emptyArray;
            }

            datas = new Data[capacity];
            Capacity = capacity;
        }

        public Data this[int index]
        {
            get
            {
                Debug.Assert(index >= 0);
                return datas[index];
            }
            set
            {
                Debug.Assert(index >= 0);
                datas[index] = value;
            }
        }

        public void Add(Data data)
        {

        }

        public void Clear()
        {

        }

        public bool Contains(Data data)
        {
            return false;
        }

        public int IndexOf(Data data)
        {
            return 0;
        }
        
        public int LastIndexOf(Data data)
        {
            return 0;
        }

        public void Insert(int index, Data data)
        {

        }

        public bool Remove(Data data)
        {
            return false;
        }

        public void RemoveAt(int index)
        {

        }

        public void Reverse()
        {

        }

        public void RemoveUnordered(Data data)
        {

        }
    }
}
