
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterEdge::status::FinalReady_main(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  L2CValue *this_00;
  Fighter *pFVar4;
  long lVar5;
  Hash40 HVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
  GVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EDGE_FINAL_MODULE_READY_INIT);
  pFVar4 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::FighterSpecializer_Edge::call_final_module(pFVar4,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_INSTANCE_WORK_ID_INT_FINAL_MOVIE_HASH);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,lVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  HVar6 = lib::L2CValue::as_hash(aLStack64);
  app::lua_bind::FighterManager__prepare_movie_impl(LUA_SCRIPT_LINE_STATUS_SHIFT,HVar6);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack96,0x14f70b509e);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  HVar6 = lib::L2CValue::as_hash(aLStack96);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar6,-1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FinalReady_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

