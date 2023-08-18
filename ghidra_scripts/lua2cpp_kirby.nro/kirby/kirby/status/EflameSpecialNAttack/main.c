
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::EflameSpecialNAttack_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xa1b1b0ad5);
  lib::L2CValue::L2CValue(aLStack96,0xeeb496041);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_INT_ROTATE_NUM);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,iVar1);
  lib::L2CValue::L2CValue(aLStack64,3);
  uVar2 = lib::L2CValue::operator__(aLStack128,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_INT_ROTATE_NUM);
    iVar1 = lib::L2CValue::as_integer(aLStack144);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack128,iVar1);
    lib::L2CValue::L2CValue(aLStack64,2);
    uVar2 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar2 & 1) == 0) goto LAB_7100107f54;
    lib::L2CValue::L2CValue(aLStack64,0xa82125b6f);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xe724031fb);
    lib::L2CValue::operator_(aLStack96,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xaf5156bf9);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xe0547016d);
    lib::L2CValue::operator_(aLStack96,aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack64);
LAB_7100107f54:
  lib::L2CValue::L2CValue(aLStack128,aLStack80);
  lib::L2CValue::L2CValue(aLStack144,aLStack96);
  lib::L2CValue::L2CValue(aLStack160,aLStack112);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
            (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack192,true);
  lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  FUN_710011bd50(this);
  lib::L2CValue::L2CValue(aLStack208,EflameSpecialNAttack_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

