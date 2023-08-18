
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPit::status::SpecialNCharge_main_loop(L2CFighterPit *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  long lVar7;
  Hash40 HVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack128);
        goto LAB_710001d604;
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar6 = aLStack128;
      goto LAB_710001dd84;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) goto LAB_710001d604;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack128);
LAB_710001d604:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_PIT_SPECIAL_AIR_N);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_FLAG_FIRST);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_INT_MOTION_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,lVar7);
        HVar8 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_GENERATE_ARTICLE_BOW);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_INT_BOW_MOTION_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,lVar7);
        lib::L2CValue::L2CValue(aLStack160,true);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        HVar8 = lib::L2CValue::as_hash(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*ppBVar10,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
        goto LAB_710001da34;
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_INT_MOTION_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar7);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar11 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar10,HVar8,fVar12,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_GENERATE_ARTICLE_BOW);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_INT_BOW_MOTION_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,lVar7);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      HVar8 = lib::L2CValue::as_hash(aLStack128);
      app::lua_bind::ArticleModule__change_motion_impl(*ppBVar10,iVar3,HVar8,false,-1.0);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_FLAG_FIRST);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
      GVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_FLAG_FIRST);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_INT_MOTION);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,lVar7);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar8 = lib::L2CValue::as_hash(aLStack112);
        fVar12 = (float)lib::L2CValue::as_number(aLStack144);
        fVar11 = (float)lib::L2CValue::as_number(aLStack160);
        bVar1 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar10,HVar8,fVar12,fVar11,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_GENERATE_ARTICLE_BOW);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_INT_BOW_MOTION);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,lVar7);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        HVar8 = lib::L2CValue::as_hash(aLStack128);
        app::lua_bind::ArticleModule__change_motion_impl(*ppBVar10,iVar3,HVar8,false,-1.0);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_FLAG_FIRST);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_INT_MOTION);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,lVar7);
        HVar8 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_GENERATE_ARTICLE_BOW);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_INT_BOW_MOTION);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,lVar7);
        lib::L2CValue::L2CValue(aLStack160,true);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        HVar8 = lib::L2CValue::as_hash(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*ppBVar10,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
LAB_710001da34:
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
      }
    }
    pLVar6 = aLStack112;
LAB_710001dd84:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_INT_CHARGE);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack176,0xca3dc30e5);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar9 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar9);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_FLAG_DIR_S);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack144,0xa2fb56067);
        uVar5 = lib::L2CValue::as_integer(aLStack128);
        uVar9 = lib::L2CValue::as_integer(aLStack144);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar9);
        lib::L2CValue::L2CValue(aLStack112,fVar12);
        uVar5 = lib::L2CValue::operator_(pLVar6,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) goto LAB_710001df38;
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_STATUS_KIND_SPECIAL_N_DIR);
        lib::L2CValue::L2CValue(aLStack128,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack144,0xa2fb56067);
        uVar5 = lib::L2CValue::as_integer(aLStack128);
        uVar9 = lib::L2CValue::as_integer(aLStack144);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar9);
        lib::L2CValue::L2CValue(aLStack112,fVar12);
        uVar5 = lib::L2CValue::operator__(aLStack112,pLVar6);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
          fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack128,fVar12);
          lib::L2CValue::operator_(pLVar6,aLStack128);
          lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack176,0xcee0a3848);
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          uVar9 = lib::L2CValue::as_integer(aLStack176);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar9);
          lib::L2CValue::L2CValue(aLStack144,fVar12);
          uVar5 = lib::L2CValue::operator__(aLStack112,aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar5 & 1) == 0) goto LAB_710001df38;
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_STATUS_KIND_SPECIAL_N_TURN);
          lib::L2CValue::L2CValue(aLStack128,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_STATUS_KIND_SPECIAL_N_DIR);
          lib::L2CValue::L2CValue(aLStack128,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_FLAG_CHARGE_MAX);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_STATUS_KIND_SPECIAL_N_SHOOT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIT_STATUS_KIND_SPECIAL_N_SHOOT);
    lib::L2CValue::L2CValue(aLStack128,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710001df38:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

