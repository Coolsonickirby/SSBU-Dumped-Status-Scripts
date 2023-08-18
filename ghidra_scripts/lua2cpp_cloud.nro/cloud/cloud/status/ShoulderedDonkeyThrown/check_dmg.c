
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::ShoulderedDonkeyThrown_check_dmg
          (L2CFighterCloud *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *in_x1;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack112,in_x1);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0xb9ea8580a);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar4 = lib::L2CValue::operator_(aLStack64,pLVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_CAPTURE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_DAMAGE);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(aLStack64,aLStack112);
  lua2cpp::L2CFighterCommon::FighterStatusUniqProcessShoulderedDonkeyThrown_check_damage
            (this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

