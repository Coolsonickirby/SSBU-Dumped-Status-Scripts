
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterEdge::status::SpecialN_main(L2CFighterCommon *this)

{
  int iVar1;
  int iVar2;
  signed sVar3;
  L2CValue aLStack224 [16];
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
  
  lib::L2CValue::L2CValue(aLStack64,0xf3a6aace3);
  lib::L2CValue::L2CValue(aLStack80,0x1331f32137);
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack128,aLStack64);
  lib::L2CValue::L2CValue(aLStack144,aLStack80);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,true);
  FUN_7100013d60(this,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_EDGE_SPECIAL_N_NONE);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CHARGE_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_EDGE_STATUS_SPECIAL_N_FLAG_REQUEST_SHOOT);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,-1);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CANCEL_STATUS);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_GUARD);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_ESCAPE);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_JUMP);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ESCAPE);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,8);
  sVar3 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::ControlModule__set_add_jump_mini_button_life_impl(this->moduleAccessor,sVar3);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,SpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

