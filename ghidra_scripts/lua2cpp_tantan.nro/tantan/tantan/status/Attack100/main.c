
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::Attack100_main(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_status_Attack100_common(this);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_COMBO_SPECIAL_BUTTON);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,&DAT_7100063b50);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,Attack100_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

