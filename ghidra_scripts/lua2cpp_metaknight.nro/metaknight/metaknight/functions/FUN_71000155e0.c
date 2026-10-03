
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000155e0(L2CFighterMetaknight *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  long lVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_71000156e8;
    }
    iVar4 = 1;
    goto LAB_7100015a7c;
  }
  lib::L2CValue::~L2CValue(aLStack112);
LAB_71000156e8:
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,GROUND_TOUCH_FLAG_DOWN);
        uVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar10,uVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) goto LAB_7100015854;
        HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack96,HVar8);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack112,lVar9);
        uVar6 = lib::L2CValue::operator==(aLStack96,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) goto LAB_7100015a74;
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
          lib::L2CValue::L2CValue(aLStack96,lVar9);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack144,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar8 = lib::L2CValue::as_hash(aLStack96);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          fVar12 = (float)lib::L2CValue::as_number(aLStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT)
          ;
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
          goto LAB_7100015a6c;
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
        lib::L2CValue::L2CValue
                  (aLStack128,
                   _FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_ARTICLE_MOT_AIR_KIND);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack112,lVar9);
        lib::L2CValue::L2CValue(aLStack144,true);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        HVar8 = lib::L2CValue::as_hash(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*ppBVar10,iVar4,HVar8,(bool)(bVar1 & 1),-1.0);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack96,lVar9);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
      else {
LAB_7100015854:
        HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack96,HVar8);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack112,lVar9);
        uVar6 = lib::L2CValue::operator==(aLStack96,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) goto LAB_7100015a74;
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
          lib::L2CValue::L2CValue(aLStack96,lVar9);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack144,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar8 = lib::L2CValue::as_hash(aLStack96);
          fVar11 = (float)lib::L2CValue::as_number(aLStack128);
          fVar12 = (float)lib::L2CValue::as_number(aLStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar10,HVar8,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT)
          ;
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
          goto LAB_7100015a6c;
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_ARTICLE_MOT_KIND
                  );
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack112,lVar9);
        lib::L2CValue::L2CValue(aLStack144,true);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        HVar8 = lib::L2CValue::as_hash(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*ppBVar10,iVar4,HVar8,(bool)(bVar1 & 1),-1.0);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        lVar9 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack96,lVar9);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar8,-1.0,1.0,0.0,false,false);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar7 = aLStack112;
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      }
      lib::L2CValue::~L2CValue(aLStack112);
LAB_7100015a6c:
      pLVar7 = aLStack96;
    }
    lib::L2CValue::~L2CValue(pLVar7);
  }
LAB_7100015a74:
  iVar4 = 0;
LAB_7100015a7c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

