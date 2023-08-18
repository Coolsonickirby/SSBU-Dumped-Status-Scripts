
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterJack::status::FinalReady_main(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  uint uVar4;
  int iVar5;
  FighterEntryID FVar6;
  Hash40 HVar7;
  L2CValue *this_00;
  Fighter *pFVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_FINAL_FLAG_CLEAR_SLOW);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
  GVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x974cac6bc);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar7 = lib::L2CValue::as_hash(aLStack96);
  fVar12 = (float)lib::L2CValue::as_number(aLStack112);
  fVar13 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar7,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,uVar4);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_FINAL_INT_DASH_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar5);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_FINAL_MODULE_READY_INIT);
  pFVar8 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Jack::call_final_module(pFVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  FVar6 = lib::L2CValue::as_integer(aLStack96);
  pvVar9 = (void *)app::lua_bind::FighterManager__get_fighter_information_impl
                             (FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_START_INT,FVar6);
  lib::L2CValue::L2CValue(aLStack112,pvVar9);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_FIXED_MOVIE);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar10 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar10 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0x77a08c3fc);
    lib::L2CValue::L2CValue(aLStack160,100);
    HVar7 = lib::L2CValue::as_hash(aLStack144);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    uVar4 = app::sv_math::rand(HVar7,iVar2);
    lib::L2CValue::L2CValue(aLStack96,uVar4);
    lib::L2CValue::L2CValue(aLStack192,0xb54dafbfb);
    lib::L2CValue::L2CValue(aLStack208,0xd1d6fdfae);
    uVar10 = lib::L2CValue::as_integer(aLStack192);
    uVar11 = lib::L2CValue::as_integer(aLStack208);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar10,uVar11);
    lib::L2CValue::L2CValue(aLStack176,iVar2);
    uVar10 = lib::L2CValue::operator_(aLStack96,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar10 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x2e3d3b8bf0);
      lib::L2CValue::operator_(aLStack128,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x2ef6675855);
      lib::L2CValue::operator_(aLStack128,aLStack96);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x2ef6675855);
    lib::L2CValue::operator_(aLStack128,aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  HVar7 = lib::L2CValue::as_hash(aLStack128);
  app::lua_bind::FighterManager__prepare_movie_impl
            (FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_4_START_INT,HVar7);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MOVIE_STATUS_KIND_PREPARE);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_JACK_STATUS_FINAL_INT_MOVIE_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar5);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FinalReady_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

