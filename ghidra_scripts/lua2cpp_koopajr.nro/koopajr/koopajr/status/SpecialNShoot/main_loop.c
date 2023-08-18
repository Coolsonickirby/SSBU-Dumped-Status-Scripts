
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopajr::status::SpecialNShoot_main_loop(L2CFighterKoopajr *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  ulong uVar5;
  Hash40 HVar6;
  ulong *this_01;
  float fVar7;
  uint uVar8;
  long lVar9;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  ulong auStack320 [2];
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
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100016d88;
  }
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
      uVar4 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) goto LAB_710001669c;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100016d88;
  }
  lib::L2CValue::_L2CValue(aLStack144);
LAB_710001669c:
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
LAB_710001676c:
    lib::L2CValue::L2CValue(aLStack192,aLStack144);
    lib::L2CValue::L2CValue(aLStack208,0xfd55705d2);
    lib::L2CValue::L2CValue(aLStack224,0x13dece8806);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_N);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_AIR_N);
    lib::L2CValue::L2CValue(aLStack272,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    lib::L2CValue::L2CValue(aLStack288,GROUND_CORRECT_KIND_AIR);
    FUN_7100010330(aLStack160,this,aLStack192,aLStack208,aLStack224,aLStack240,aLStack256,aLStack272
                   ,aLStack288);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KOOPAJR_STATUS_SPECIAL_N_FLAG_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack320,_FIGHTER_KOOPAJR_STATUS_SPECIAL_N_FLAG_FAIL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack304,(bool)(bVar2 & 1));
      lib::L2CValue::operator_(aLStack304);
      bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack304,0x162ffcc9f2);
        HVar6 = lib::L2CValue::as_hash(aLStack304);
        iVar3 = app::lua_bind::SoundModule__play_se_impl
                          (this->moduleAccessor,HVar6,true,false,false,false,0);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
        this_01 = &local_50;
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_FIGHTER_KOOPAJR_STATUS_SPECIAL_N_FLOAT_CHARGE);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack304,fVar7);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue(aLStack336,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack352,0xca3dc30e5);
        uVar4 = lib::L2CValue::as_integer(aLStack336);
        uVar5 = lib::L2CValue::as_integer(aLStack352);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
        lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
        uVar4 = lib::L2CValue::operator_((L2CValue *)&local_50,(L2CValue *)auStack320);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
          lib::L2CValue::operator_((L2CValue *)auStack320,(L2CValue *)&local_50);
          lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
        lib::L2CValue::operator_((L2CValue *)auStack320,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_FIGHTER_KOOPAJR_STATUS_SPECIAL_N_FLOAT_CHARGE);
        fVar7 = (float)lib::L2CValue::as_number(aLStack336);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KOOPAJR_GENERATE_ARTICLE_CANNONBALL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack352,0x10fefe95ed);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        uVar5 = lib::L2CValue::as_integer(aLStack352);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack336,fVar7);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack368,0x10c2f3aab4);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        uVar5 = lib::L2CValue::as_integer(aLStack368);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack352,fVar7);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::operator_(aLStack352,aLStack336);
        lib::L2CValue::operator_(aLStack416,(L2CValue *)auStack320);
        lib::L2CValue::operator_(aLStack400,aLStack336);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
        lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::L2CValue(aLStack384,0.0);
        lib::L2CValue::L2CValue(aLStack400,0.0);
        uVar4 = lib::L2CValue::as_number(aLStack368);
        lVar9 = lib::L2CValue::as_number(aLStack384);
        uVar8 = lib::L2CValue::as_number(aLStack400);
        local_50 = uVar4 & 0xffffffff | lVar9 << 0x20;
        uStack72 = (ulong)uVar8;
        app::lua_bind::KineticModule__add_speed_impl(this->moduleAccessor,(Vector3f *)&local_50);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        this_01 = auStack320;
      }
      lib::L2CValue::_L2CValue((L2CValue *)this_01);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KOOPAJR_STATUS_SPECIAL_N_FLAG_SHOOT);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack304);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((bVar1 & 1U) == 0) goto LAB_710001676c;
    lib::L2CValue::L2CValue(aLStack160,0);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack160);
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::_L2CValue(aLStack144);
LAB_7100016d88:
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

