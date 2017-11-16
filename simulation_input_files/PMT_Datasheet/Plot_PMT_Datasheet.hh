int Line_File(const char * file)
{
  ifstream f (file);
  int count=0;
  string line;

  while (getline(f, line))
    {
      ++count;
    }

  cout << "Number line file = " << count << endl;

  return count;

}
