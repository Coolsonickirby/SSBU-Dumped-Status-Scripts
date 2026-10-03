
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000160a0(L2CFighterMiigunner *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *pLVar10;
  Hash40 HVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  float fVar14;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MIIGUNNER_GENERATE_ARTICLE_GROUNDBOMB);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  ppBVar12 = &this->moduleAccessor;
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar7 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x50000000);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GROUND_BOMB_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIGUNNER_STATUS_GROUND_BOMB_FLAG_EXIST_BOMB_BURST);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIGUNNER_STATUS_GROUND_BOMB_FLAG_EXIST_BOMB_BURST);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GROUND_BOMB_OBJECT_ID)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x50000000);
    uVar7 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::sv_battle_object::is_null(uVar5);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar7 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::sv_battle_object::is_active(uVar5);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) goto LAB_71000163b4;
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
        if (pvVar8 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE)
          ;
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,pvVar8);
        }
        pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
        iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar9);
        lib::L2CValue::L2CValue(aLStack144,iVar3);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_MIIGUNNER_GROUNDBOMB_STATUS_KIND_BURST_ATTACK);
        uVar7 = lib::L2CValue::operator==(aLStack144,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIGUNNER_GENERATE_ARTICLE_GROUNDBOMB);
          lib::L2CValue::L2CValue(aLStack144,_WEAPON_MIIGUNNER_GROUNDBOMB_STATUS_KIND_BURST_ATTACK);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::ArticleModule__change_status_exist_impl(*ppBVar12,iVar3,iVar4);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack96);
        }
      }
      lib::L2CValue::~L2CValue(aLStack128);
    }
LAB_71000163b4:
    lib::L2CValue::L2CValue(aLStack96,0x50000000);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GROUND_BOMB_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==(pLVar10,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator==(pLVar10,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::~L2CValue(aLStack112);
        goto LAB_7100016454;
      }
    }
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==(pLVar10,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      pLVar10 = aLStack112;
      goto LAB_71000168e0;
    }
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==(pLVar10,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) goto LAB_7100016454;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack112);
LAB_7100016454:
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==(pLVar10,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar6 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar6);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIGUNNER_STATUS_GROUND_BOMB_FLAG_FIRST);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xfbe42ba86);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        fVar13 = (float)lib::L2CValue::as_number(aLStack112);
        fVar14 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIGUNNER_STATUS_GROUND_BOMB_FLAG_FIRST);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xfbe42ba86);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
      GVar6 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar6);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIGUNNER_STATUS_GROUND_BOMB_FLAG_FIRST);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xb49d0bfb1);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        fVar13 = (float)lib::L2CValue::as_number(aLStack112);
        fVar14 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIGUNNER_STATUS_GROUND_BOMB_FLAG_FIRST);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xb49d0bfb1);
        HVar11 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
      }
    }
    pLVar10 = aLStack96;
LAB_71000168e0:
    lib::L2CValue::~L2CValue(pLVar10);
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar7 & 1) != 0) {
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==(pLVar10,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) goto LAB_7100016b00;
    }
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator==(pLVar10,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) goto LAB_7100016b00;
    }
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==(pLVar10,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator==(pLVar10,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) goto LAB_7100016b00;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
  }
LAB_7100016b00:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

