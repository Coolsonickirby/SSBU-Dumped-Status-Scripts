
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RidleySpecialNShoot_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *this_00;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0x140707e4de);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  ppBVar8 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_INT_FIRE_NUM);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,0xfd55705d2);
  lib::L2CValue::L2CValue(aLStack144,0x13dece8806);
  lib::L2CValue::L2CValue(aLStack160,true);
  lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  FUN_710016ffe0(this,aLStack128,aLStack144,aLStack160,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue(aLStack224,false);
  FUN_71001703d0(this,aLStack192,aLStack208,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_FLOAT_WEAK_SIZE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack240,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack256,0x10f198450e);
  HVar7 = lib::L2CValue::as_hash(aLStack256);
  uVar10 = lib::L2CValue::as_number(aLStack240);
  uVar11 = lib::L2CValue::as_number(aLStack240);
  uVar12 = lib::L2CValue::as_number(aLStack240);
  local_50 = CONCAT44(uVar11,uVar10);
  uStack72 = (ulong)uVar12;
  app::lua_bind::ModelModule__set_joint_scale_impl(*ppBVar8,HVar7,(Vector3f *)&local_50);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_FLAG_SHOOT);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_FLAG_SHOOT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack272,0xbd243b832);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar6 = lib::L2CValue::as_integer(aLStack272);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack256,iVar3);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator_(aLStack304,aLStack96);
      lib::L2CValue::operator_(aLStack256,aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
        lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      }
      fVar9 = (float)lib::L2CValue::as_number(aLStack272);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar8,fVar9);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_INT_FIRE_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_GENERATE_ARTICLE_BREATH);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar8,iVar3,false,-1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_INT_FIRE_FRAME_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack256,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_INT_FIRE_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack272,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
  if (((uVar5 & 1) != 0) &&
     (uVar5 = lib::L2CValue::operator_(aLStack272,aLStack112), (uVar5 & 1) != 0)) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_INT_FIRE_FRAME_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar4 = lib::L2CValue::as_integer(aLStack288);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_INT_FIRE_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_GENERATE_ARTICLE_BREATH);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar8,iVar3,false,-1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_INT_FIRE_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack288);
  uVar5 = lib::L2CValue::operator__(aLStack272,aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
    app::lua_bind::MotionModule__set_rate_impl(*ppBVar8,fVar9);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_SPECIAL_N_WORK_INT_FIRE_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar5 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack288);
LAB_71001712b4:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack288,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xe0);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack288,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xe0);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack320,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xc0);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar5 = lib::L2CValue::operator__(aLStack304,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack288);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
      uVar5 = lib::L2CValue::operator__(aLStack336,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack288);
      if ((uVar5 & 1) != 0) goto LAB_71001712b4;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

