
void FUN_71000082d0(L2CValue *param_1,L2CValue *param_2)

{
  int iVar1;
  uint uVar2;
  L2CTable *this;
  L2CValue *pLVar3;
  Hash40 HVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(this,0);
  lib::L2CValue::L2CValue(param_1,this);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_1,0x43bc4bcd9);
  lib::L2CValue::operator=(pLVar3,param_2);
  lib::L2CValue::L2CValue(aLStack80,0x77a08c3fc);
  lib::L2CValue::L2CValue(aLStack96,100);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  uVar2 = app::sv_math::rand(HVar4,iVar1);
  lib::L2CValue::L2CValue(aLStack64,uVar2);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_1,0x418c6f574);
  lib::L2CValue::operator=(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

