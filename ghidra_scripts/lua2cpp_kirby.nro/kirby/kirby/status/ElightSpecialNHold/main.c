
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::ElightSpecialNHold_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
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
  
  lib::L2CValue::L2CValue(aLStack64,0xe06860a20);
  lib::L2CValue::L2CValue(aLStack80,0x1244d4ffef);
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack128,aLStack64);
  lib::L2CValue::L2CValue(aLStack144,aLStack80);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
            (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_INT_HOLD_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,true);
  lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208,ElightSpecialNHold_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

