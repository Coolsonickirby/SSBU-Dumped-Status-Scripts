
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::SpecialLwAttack_main
          (L2CFighterMetaknight *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  L2CValue *pLVar6;
  FighterModuleAccessor *pFVar7;
  L2CAgent *this_01;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  Hash40 HVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  float fVar14;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_FLAG_STOP_X);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  ppBVar12 = &this->moduleAccessor;
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_FLOAT_MOVE_DISTANCE);
  fVar13 = (float)lib::L2CValue::as_number(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue
            (aLStack128,
             _FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_FLOAT_RIGHT_EDGE_DISTANCE_X);
  fVar13 = (float)lib::L2CValue::as_number(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_FLOAT_LEFT_EDGE_DISTANCE_X
            );
  fVar13 = (float)lib::L2CValue::as_number(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pFVar7 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  app::FighterSpecializer_Metaknight::check_edge_special_lw(pFVar7);
  pLVar6 = (L2CValue *)0x1a;
  this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
  lib::L2CAgent::math_abs(this_01,pLVar6);
  lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack160,0x149771081d);
  uVar8 = lib::L2CValue::as_integer(aLStack144);
  uVar9 = lib::L2CValue::as_integer(aLStack160);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack128,fVar13);
  uVar8 = lib::L2CValue::operator__(aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    fVar13 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar12);
    lib::L2CValue::L2CValue(aLStack144,fVar13);
    lib::L2CValue::operator_(pLVar6,aLStack144);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar8 = lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xc1dc2a9b6);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x10a5889ebc);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xc1dc2a9b6);
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_ARTICLE_MOT_KIND);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x10a5889ebc);
      lib::L2CValue::L2CValue
                (aLStack128,
                 _FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_ARTICLE_MOT_AIR_KIND);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) != 0) {
        fVar13 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack128,fVar13);
        fVar13 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = app::lua_bind::GroundModule__is_ottotto_lr_impl(*ppBVar12,fVar13,1.5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_FLAG_STOP_X);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
          goto LAB_7100015084;
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0xc1aaf6daf);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x10a2e55aa5);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xc1aaf6daf);
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_ARTICLE_MOT_KIND);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x10a2e55aa5);
      lib::L2CValue::L2CValue
                (aLStack128,
                 _FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_ARTICLE_MOT_AIR_KIND);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar6,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) != 0) {
        fVar13 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack160,fVar13);
        lib::L2CValue::L2CValue(aLStack112,-1.0);
        lib::L2CValue::operator_(aLStack160,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        fVar13 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = app::lua_bind::GroundModule__is_ottotto_lr_impl(*ppBVar12,fVar13,1.5);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_FLAG_STOP_X);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
LAB_7100015084:
          pLVar6 = aLStack112;
          goto LAB_710001443c;
        }
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0xab6928cf2);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
    lVar10 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0xe46c0e666);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
    lVar10 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0xab6928cf2);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_ARTICLE_MOT_KIND);
    lVar10 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0xe46c0e666);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_ARTICLE_MOT_AIR_KIND
              );
    lVar10 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar12,lVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) != 0) {
      bVar1 = app::lua_bind::GroundModule__is_ottotto_impl(*ppBVar12,1.5);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_FLAG_STOP_X)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
    lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x40);
    pLVar6 = aLStack192;
LAB_710001443c:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_SITUATION_KIND);
  iVar3 = lib::L2CValue::as_integer(pLVar6);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue
            (aLStack144,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_SITUATION_KIND_PREV);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
LAB_71000149ac:
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_SITUATION_KIND_PREV)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack176,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_SITUATION_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar5);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          lVar10 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
          lib::L2CValue::L2CValue(aLStack112,lVar10);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,1.0);
          lib::L2CValue::L2CValue(aLStack176,false);
          HVar11 = lib::L2CValue::as_hash(aLStack112);
          fVar13 = (float)lib::L2CValue::as_number(aLStack144);
          fVar14 = (float)lib::L2CValue::as_number(aLStack160);
          bVar1 = lib::L2CValue::as_bool(aLStack176);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
          goto LAB_7100015278;
        }
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
        lib::L2CValue::L2CValue
                  (aLStack144,
                   _FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_ARTICLE_MOT_AIR_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        lVar10 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack128,lVar10);
        lib::L2CValue::L2CValue(aLStack160,true);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        HVar11 = lib::L2CValue::as_hash(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*ppBVar12,iVar3,HVar11,(bool)(bVar1 & 1),-1.0);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar10 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack112,lVar10);
        HVar11 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
        goto LAB_7100014d78;
      }
    }
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
    GVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar10 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar10);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar11 = lib::L2CValue::as_hash(aLStack112);
      fVar13 = (float)lib::L2CValue::as_number(aLStack144);
      fVar14 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
LAB_7100015278:
      pLVar6 = aLStack112;
      goto LAB_710001527c;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_ARTICLE_MOT_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    lVar10 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack128,lVar10);
    lib::L2CValue::L2CValue(aLStack160,true);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    HVar11 = lib::L2CValue::as_hash(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ArticleModule__change_motion_impl(*ppBVar12,iVar3,HVar11,(bool)(bVar1 & 1),-1.0);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar10 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar10);
    HVar11 = lib::L2CValue::as_hash(aLStack112);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_SITUATION_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) goto LAB_71000149ac;
    lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
    GVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::GroundModule__correct_impl(*ppBVar12,GVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      lVar10 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack112,lVar10);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar11 = lib::L2CValue::as_hash(aLStack112);
      fVar13 = (float)lib::L2CValue::as_number(aLStack144);
      fVar14 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar12,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
      goto LAB_7100015278;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_LW_ATTACK_WORK_INT_ARTICLE_MOT_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    lVar10 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack128,lVar10);
    lib::L2CValue::L2CValue(aLStack160,true);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    HVar11 = lib::L2CValue::as_hash(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::ArticleModule__change_motion_impl(*ppBVar12,iVar3,HVar11,(bool)(bVar1 & 1),-1.0);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar10 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar10);
    HVar11 = lib::L2CValue::as_hash(aLStack112);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*ppBVar12,HVar11,-1.0,1.0,0.0,false,false);
  }
LAB_7100014d78:
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar6 = aLStack128;
LAB_710001527c:
  lib::L2CValue::_L2CValue(pLVar6);
  lib::L2CValue::L2CValue(aLStack208,&DAT_71000155e0);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  return;
}

