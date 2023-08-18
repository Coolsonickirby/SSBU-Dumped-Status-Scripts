
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::SpecialS3_check_atk(L2CFighterCloud *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,in_x1);
  lib::L2CValue::L2CValue(aLStack112,in_x2);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x5d6e20d24);
  lib::L2CValue::L2CValue(aLStack80,pLVar2);
  lib::L2CValue::L2CValue(aLStack64,COLLISION_KIND_HIT);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,COLLISION_KIND_SHIELD);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) goto LAB_71000032c8;
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CLOUD_STATUS_SPECIAL_S_FLAG_HIT_ATTACK);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_71000032c8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

