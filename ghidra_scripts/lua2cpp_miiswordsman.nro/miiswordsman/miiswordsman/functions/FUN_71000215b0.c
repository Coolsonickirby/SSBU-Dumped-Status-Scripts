
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000215b0(L2CFighterMiiswordsman *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
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
  
  lib::L2CValue::L2CValue(aLStack224,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000225d0;
  }
  ppBVar10 = &this->moduleAccessor;
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x10);
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) goto LAB_710002170c;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_71000225d0;
  }
  lib::L2CValue::~L2CValue(aLStack128);
LAB_710002170c:
  bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000225d0;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack304,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000225d0;
    }
  }
  FUN_7100022a30(aLStack128,this);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack128);
LAB_7100021a30:
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      FUN_7100022a30(aLStack112,this);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
        GVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_WORK_INT_MOTION_AIR)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,lVar7);
        lib::L2CValue::operator=(aLStack224,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_FLAG_FIRST);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar8 = lib::L2CValue::as_hash(aLStack224);
          fVar11 = (float)lib::L2CValue::as_number(aLStack112);
          fVar12 = (float)lib::L2CValue::as_number(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_FLAG_FIRST);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          goto LAB_7100021c4c;
        }
        HVar8 = lib::L2CValue::as_hash(aLStack224);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
    }
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) goto LAB_7100021a30;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_WORK_INT_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar7);
    lib::L2CValue::operator=(aLStack224,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_FLAG_FIRST);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      HVar8 = lib::L2CValue::as_hash(aLStack224);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar8 = lib::L2CValue::as_hash(aLStack224);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack128);
      bVar2 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_FLAG_FIRST);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
LAB_7100021c4c:
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_FLAG_REQUEST_GENERATE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_FLAG_REQUEST_GENERATE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_ACTIVE_CHAKRAM_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack112,0x50000000);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_FLAG_IS_GENERATE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_GENERATE_ARTICLE_CHAKRAM);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::ArticleModule__generate_article_impl(*ppBVar10,iVar3,false,-1);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_FLAG_IS_GENERATE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
    }
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_FLAG_CHECK_MOTION_HI_LW);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_FLAG_CHECK_MOTION_HI_LW)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    fVar11 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x1217f7cbf5);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar9 = lib::L2CValue::as_integer(aLStack160);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar9);
    lib::L2CValue::L2CValue(aLStack144,fVar11);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack176,0x146ca79371);
    pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,(ulong)pLVar6,uVar5);
    lib::L2CValue::L2CValue(aLStack160,fVar11);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack112);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack176,fVar11);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar6);
    pLVar6 = aLStack112;
    uVar5 = lib::L2CValue::operator<(aLStack144,pLVar6);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CAgent::math_rad((L2CAgent *)aLStack160,pLVar6);
      fVar11 = (float)app::lua_bind::ControlModule__get_stick_dir_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack192,fVar11);
      lib::L2CValue::operator=(aLStack320,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      uVar5 = lib::L2CValue::operator<(aLStack112,aLStack320);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::operator-(aLStack112);
        uVar5 = lib::L2CValue::operator<(aLStack320,aLStack192);
        lib::L2CValue::~L2CValue(aLStack192);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::operator-(aLStack112);
          lib::L2CValue::operator=(aLStack320,aLStack192);
          lib::L2CValue::~L2CValue(aLStack192);
        }
      }
      else {
        lib::L2CValue::operator=(aLStack320,aLStack112);
      }
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0.0);
      uVar5 = lib::L2CValue::operator<(aLStack320,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::operator-((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack320);
        lib::L2CValue::operator=(aLStack320,aLStack112);
        pLVar6 = aLStack112;
      }
      else {
        lib::L2CValue::operator-((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        lib::L2CValue::operator-(aLStack192,aLStack320);
        lib::L2CValue::operator=(aLStack320,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        pLVar6 = aLStack192;
      }
      lib::L2CValue::~L2CValue(pLVar6);
    }
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack320,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,2.0);
      lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::operator+(aLStack320,aLStack208);
      lib::L2CValue::operator=(aLStack320,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
    }
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator+(aLStack320,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_WORK_FLOAT_SHOOT_ANGLE);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    fVar11 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x1217f7cbf5);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar9 = lib::L2CValue::as_integer(aLStack160);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar9);
    lib::L2CValue::L2CValue(aLStack144,fVar11);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    uVar5 = lib::L2CValue::operator<(aLStack144,aLStack128);
    if ((uVar5 & 1) == 0) {
      fVar11 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::operator-(aLStack144);
      uVar5 = lib::L2CValue::operator<(aLStack112,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0xf88135239);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_WORK_INT_MOTION);
        lVar7 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar7,iVar3);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x13838adfed);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_WORK_INT_MOTION_AIR)
        ;
        lVar7 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar7,iVar3);
        goto LAB_7100022498;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0xf1670aa5e);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_WORK_INT_MOTION);
      lVar7 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x131de9278a);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_WORK_INT_MOTION_AIR);
      lVar7 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar7,iVar3);
LAB_7100022498:
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_WORK_INT_MOTION_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar7);
      lib::L2CValue::~L2CValue(aLStack160);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIISWORDSMAN_STATUS_CHAKRAM_WORK_INT_MOTION);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar7);
      lib::L2CValue::~L2CValue(aLStack160);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack320);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000225d0:
  lib::L2CValue::~L2CValue(aLStack224);
  return;
}

