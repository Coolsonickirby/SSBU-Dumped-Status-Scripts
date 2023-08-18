
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::FinalReady_main(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  Fighter *pFVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
  GVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  fVar10 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  fVar10 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xda99a1ef9);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    fVar10 = (float)lib::L2CValue::as_number(aLStack96);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar7,fVar10,fVar11,0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x974cac6bc);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    fVar10 = (float)lib::L2CValue::as_number(aLStack96);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar7,fVar10,fVar11,0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_FINAL_MODULE_READY_INIT);
  pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Brave::call_final_module(pFVar8,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_FINAL_MOVIE_HASH);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  lVar9 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,lVar9);
  lib::L2CValue::_L2CValue(aLStack128);
  HVar7 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::FighterManager__prepare_movie_impl(LUA_SCRIPT_LINE_SYSTEM_POST,HVar7);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MOVIE_STATUS_KIND_PREPARE);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_JACK_STATUS_FINAL_INT_MOVIE_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,FinalReady_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

