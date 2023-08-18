
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackCombo_main(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_01 = aLStack128;
  lua2cpp::L2CFighterCommon::sub_status_AttackCommon(this);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lua2cpp::L2CFighterCommon::check_attack_mtrans(this);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x13);
  lib::L2CValue::L2CValue(aLStack64,&LAB_7100042580);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_COMBO_SPECIAL_BUTTON);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,CONTROL_PAD_BUTTON_SPECIAL);
    lib::L2CValue::L2CValue(aLStack96,&DAT_71000425a0);
    lib::L2CValue::L2CValue(aLStack112,&DAT_7100042690);
    lua2cpp::L2CFighterCommon::sub_status_AttackComboCommon_button
              (this,(L2CValue)0xc0,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack128,&DAT_7100042780);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_status_AttackComboCommon(this);
    lib::L2CValue::L2CValue(aLStack64,AttackCombo_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
    this_01 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_01);
  return;
}

