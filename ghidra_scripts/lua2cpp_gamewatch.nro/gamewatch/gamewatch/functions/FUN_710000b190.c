
void FUN_710000b190(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this;
  L2CValue aLStack48 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),10);
  iVar3 = lib::L2CValue::as_integer(this);
  bVar1 = app::FighterUtil::is_hammer_status(iVar3);
  lib::L2CValue::L2CValue(aLStack48,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  iVar3 = FS_SUCCEEDS_KEEP_VISIBILITY;
  if ((bVar2 & 1U) == 0) {
    iVar3 = 0;
  }
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

