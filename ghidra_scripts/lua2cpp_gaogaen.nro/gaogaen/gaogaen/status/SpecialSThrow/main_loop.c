
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialSThrow_main_loop(L2CFighterGaogaen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *this_01;
  float *pfVar9;
  Hash40 HVar10;
  void *pvVar11;
  BattleObjectModuleAccessor *pBVar12;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  uint uVar15;
  long lVar16;
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  ulong local_120;
  ulong uStack280;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [24];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  FUN_7100021910(aLStack136);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,false);
  uVar6 = lib::L2CValue::operator__(aLStack136,(L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_CHECK_WALL_MOVE);
    iVar3 = lib::L2CValue::as_integer(aLStack136);
    ppBVar13 = &this->moduleAccessor;
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack200,0.0);
      lib::L2CValue::L2CValue(aLStack216,0.0);
      lib::L2CValue::L2CValue(aLStack232,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x38,(L2CValue)0x28,(L2CValue)0x18);
      lib::L2CValue::_L2CValue(aLStack232);
      lib::L2CValue::_L2CValue(aLStack216);
      lib::L2CValue::_L2CValue(aLStack200);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x162d277af);
      pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,*pfVar9);
      lib::L2CValue::L2CValue(aLStack272,pfVar9[1]);
      lib::L2CValue::L2CValue(aLStack256,pfVar9[2]);
      lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_120);
      lib::L2CValue::operator_(pLVar8,aLStack272);
      lib::L2CValue::operator_(this_01,aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_120,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLOAT_GAOGAEN_TARGET_X);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
      fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
      lib::L2CValue::L2CValue(aLStack152,fVar14);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
      lib::L2CValue::operator_(aLStack152,pLVar7);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,20.0);
      lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_120);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::operator_(pLVar7,aLStack336);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x162d277af);
      uVar6 = lib::L2CValue::as_number(aLStack320);
      lVar16 = lib::L2CValue::as_number(pLVar7);
      uVar15 = lib::L2CValue::as_number(pLVar8);
      local_120 = uVar6 & 0xffffffff | lVar16 << 0x20;
      uStack280 = (ulong)uVar15;
      app::lua_bind::PostureModule__set_pos_impl(*ppBVar13,(Vector3f *)&local_120);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack136);
    }
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_THROW_ROPE);
    iVar3 = lib::L2CValue::as_integer(aLStack136);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_120,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_THROW_ROPE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_120,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_THROW_ROPE_END);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,LINK_NO_CAPTURE);
      lib::L2CValue::L2CValue(aLStack136,0x13b7318a5a);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
      HVar10 = lib::L2CValue::as_hash(aLStack136);
      app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar13,iVar3,HVar10,0);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue(aLStack136,0x2a5eaa0cb9);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
      HVar10 = lib::L2CValue::as_hash(aLStack136);
      app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar13,iVar3,HVar10,0);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    }
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_THROW_ROPE_END);
    iVar3 = lib::L2CValue::as_integer(aLStack136);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue(aLStack136);
    this_00 = &this->globalTable;
    if ((bVar2 & 1U) == 0) {
LAB_7100022d74:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_120);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_120,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_120);
        lib::L2CValue::_L2CValue((L2CValue *)&local_120);
        if ((uVar6 & 1) == 0) goto LAB_7100022e70;
        lib::L2CValue::L2CValue((L2CValue *)&local_120,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_120);
        app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar5);
        lib::L2CValue::_L2CValue((L2CValue *)&local_120);
        lib::L2CValue::L2CValue((L2CValue *)&local_120,0xfec894555);
        HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_120);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar13,HVar10,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue((L2CValue *)&local_120);
        lib::L2CValue::L2CValue(aLStack480,false);
        FUN_710001d4b0(this,aLStack480);
        pLVar7 = aLStack480;
LAB_7100022f68:
        lib::L2CValue::_L2CValue(pLVar7);
      }
      else {
LAB_7100022e70:
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue((L2CValue *)&local_120,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_120);
        lib::L2CValue::_L2CValue((L2CValue *)&local_120);
        if ((uVar6 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue((L2CValue *)&local_120,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_120);
          lib::L2CValue::_L2CValue((L2CValue *)&local_120);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_120,GROUND_CORRECT_KIND_AIR);
            GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_120);
            app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar5);
            lib::L2CValue::_L2CValue((L2CValue *)&local_120);
            lib::L2CValue::L2CValue((L2CValue *)&local_120,0x13e710c881);
            HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_120);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar13,HVar10,-1.0,1.0,0.0,false,false);
            lib::L2CValue::_L2CValue((L2CValue *)&local_120);
            lib::L2CValue::L2CValue(aLStack496,false);
            FUN_710001d4b0(this,aLStack496);
            pLVar7 = aLStack496;
            goto LAB_7100022f68;
          }
        }
      }
      bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      if ((bVar2 & 1U) == 0) goto LAB_7100022524;
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_GAOGAEN_GENERATE_ARTICLE_ROPE);
      iVar3 = lib::L2CValue::as_integer(aLStack152);
      bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar13,iVar3);
      lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_120,false);
      uVar6 = lib::L2CValue::operator__(aLStack136,(L2CValue *)&local_120);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack152);
      if ((uVar6 & 1) == 0) goto LAB_7100022524;
      lib::L2CValue::L2CValue(aLStack512,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_S_END);
      lib::L2CValue::L2CValue(aLStack528,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack528);
      pLVar7 = aLStack512;
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      lib::L2CValue::L2CValue((L2CValue *)&local_120,180.0);
      uVar6 = lib::L2CValue::operator__((L2CValue *)&local_120,pLVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack136,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_FAILURE_AREA);
        iVar3 = lib::L2CValue::as_integer(aLStack136);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
        lib::L2CValue::_L2CValue((L2CValue *)&local_120);
        lib::L2CValue::_L2CValue(aLStack136);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack152,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_LARIAT_AREA);
          iVar3 = lib::L2CValue::as_integer(aLStack152);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack136);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::_L2CValue(aLStack136);
            lib::L2CValue::_L2CValue(aLStack152);
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack320,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_LARIAT_END_AREA);
            iVar3 = lib::L2CValue::as_integer(aLStack320);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
            lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue((L2CValue *)&local_120,false);
            uVar6 = lib::L2CValue::operator__(aLStack304,(L2CValue *)&local_120);
            lib::L2CValue::_L2CValue((L2CValue *)&local_120);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue(aLStack136);
            lib::L2CValue::_L2CValue(aLStack152);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue
                        (aLStack136,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_LARIAT_AREA_FIRST);
              iVar3 = lib::L2CValue::as_integer(aLStack136);
              bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
              lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
              bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
              lib::L2CValue::_L2CValue((L2CValue *)&local_120);
              lib::L2CValue::_L2CValue(aLStack136);
              if ((bVar2 & 1U) != 0) {
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_120,
                           _FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_LARIAT_AREA_FIRST);
                iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
                app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar3);
                lib::L2CValue::_L2CValue((L2CValue *)&local_120);
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_120,
                           _FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_SWING_THROWN_FIGHTER
                          );
                iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
                iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
                lib::L2CValue::L2CValue(aLStack136,iVar3);
                lib::L2CValue::_L2CValue((L2CValue *)&local_120);
                uVar15 = lib::L2CValue::as_integer(aLStack136);
                bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                                  (LUA_SCRIPT_LINE_STATUS_SHIFT,uVar15);
                lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
                bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
                lib::L2CValue::_L2CValue((L2CValue *)&local_120);
                if ((bVar2 & 1U) != 0) {
                  uVar15 = lib::L2CValue::as_integer(aLStack136);
                  pvVar11 = (void *)app::sv_battle_object::module_accessor(uVar15);
                  if (pvVar11 == (void *)0x0) {
                    lib::L2CValue::L2CValue(aLStack152,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack152,pvVar11);
                  }
                  pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack152);
                  fVar14 = (float)app::lua_bind::PostureModule__pos_x_impl(pBVar12);
                  lib::L2CValue::L2CValue(aLStack304,fVar14);
                  lib::L2CValue::L2CValue((L2CValue *)&local_120,0.0);
                  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_120);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
                  lib::L2CValue::L2CValue
                            ((L2CValue *)&local_120,
                             _FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_LARIAT_AREA_HIT_POS_X
                            );
                  fVar14 = (float)lib::L2CValue::as_number(aLStack320);
                  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
                  app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
                  lib::L2CValue::_L2CValue(aLStack320);
                  lib::L2CValue::_L2CValue(aLStack304);
                  lib::L2CValue::_L2CValue(aLStack152);
                }
                lib::L2CValue::_L2CValue(aLStack136);
              }
              lib::L2CValue::L2CValue(aLStack136,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_SHOULDER);
              iVar3 = lib::L2CValue::as_integer(aLStack136);
              bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
              lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
              bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
              lib::L2CValue::_L2CValue((L2CValue *)&local_120);
              lib::L2CValue::_L2CValue(aLStack136);
              if ((bVar2 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack416,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_S_SHOULDER);
                lib::L2CValue::L2CValue(aLStack432,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
                lib::L2CValue::_L2CValue(aLStack432);
                pLVar7 = aLStack416;
                goto LAB_7100022520;
              }
              lib::L2CValue::L2CValue(aLStack136,CONTROL_PAD_BUTTON_SPECIAL);
              iVar3 = lib::L2CValue::as_integer(aLStack136);
              bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar13,iVar3);
              lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
              bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
              if ((bVar2 & 1U) != 0) {
                lib::L2CValue::_L2CValue((L2CValue *)&local_120);
                lib::L2CValue::_L2CValue(aLStack136);
LAB_7100023214:
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_120,
                           _FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_SWING_THROWN_FIGHTER
                          );
                iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
                iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
                lib::L2CValue::L2CValue(aLStack136,iVar3);
                lib::L2CValue::_L2CValue((L2CValue *)&local_120);
                uVar15 = lib::L2CValue::as_integer(aLStack136);
                bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                                  (LUA_SCRIPT_LINE_STATUS_SHIFT,uVar15);
                lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
                bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
                lib::L2CValue::_L2CValue((L2CValue *)&local_120);
                if ((bVar2 & 1U) != 0) {
                  uVar15 = lib::L2CValue::as_integer(aLStack136);
                  pvVar11 = (void *)app::sv_battle_object::module_accessor(uVar15);
                  if (pvVar11 == (void *)0x0) {
                    lib::L2CValue::L2CValue(aLStack152,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack152,pvVar11);
                  }
                  pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack152);
                  fVar14 = (float)app::lua_bind::PostureModule__pos_x_impl(pBVar12);
                  lib::L2CValue::L2CValue(aLStack304,fVar14);
                  lib::L2CValue::L2CValue((L2CValue *)&local_120,0.0);
                  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_120);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
                  lib::L2CValue::L2CValue
                            ((L2CValue *)&local_120,
                             _FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_LARIAT_BUTTON_PUSH_POS_X
                            );
                  fVar14 = (float)lib::L2CValue::as_number(aLStack320);
                  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
                  app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
                  lib::L2CValue::_L2CValue(aLStack320);
                  lib::L2CValue::_L2CValue(aLStack304);
                  lib::L2CValue::_L2CValue(aLStack152);
                }
                lib::L2CValue::L2CValue(aLStack448,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_S_LARIAT);
                lib::L2CValue::L2CValue(aLStack464,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
                lib::L2CValue::_L2CValue(aLStack464);
                lib::L2CValue::_L2CValue(aLStack448);
                lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                lib::L2CValue::_L2CValue(aLStack136);
                return;
              }
              lib::L2CValue::L2CValue(aLStack304,_CONTROL_PAD_BUTTON_ATTACK);
              iVar3 = lib::L2CValue::as_integer(aLStack304);
              bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar13,iVar3);
              lib::L2CValue::L2CValue(aLStack152,(bool)(bVar1 & 1));
              bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack152);
              lib::L2CValue::_L2CValue(aLStack152);
              lib::L2CValue::_L2CValue(aLStack304);
              lib::L2CValue::_L2CValue((L2CValue *)&local_120);
              lib::L2CValue::_L2CValue(aLStack136);
              if ((bVar2 & 1U) != 0) goto LAB_7100023214;
            }
          }
          lib::L2CValue::L2CValue(aLStack136,CONTROL_PAD_BUTTON_SPECIAL);
          iVar3 = lib::L2CValue::as_integer(aLStack136);
          bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack304,_CONTROL_PAD_BUTTON_ATTACK);
            iVar3 = lib::L2CValue::as_integer(aLStack304);
            bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar13,iVar3);
            lib::L2CValue::L2CValue(aLStack152,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack152);
            lib::L2CValue::_L2CValue(aLStack152);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue((L2CValue *)&local_120);
            lib::L2CValue::_L2CValue(aLStack136);
            if ((bVar2 & 1U) == 0) goto LAB_7100022d74;
          }
          else {
            lib::L2CValue::_L2CValue((L2CValue *)&local_120);
            lib::L2CValue::_L2CValue(aLStack136);
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_120,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_SHOULDER);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_120);
          goto LAB_7100022d74;
        }
        lib::L2CValue::L2CValue(aLStack384,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_S_FAILURE);
        lib::L2CValue::L2CValue(aLStack400,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack400);
        pLVar7 = aLStack384;
      }
      else {
        lib::L2CValue::L2CValue(aLStack352,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_S_END);
        lib::L2CValue::L2CValue(aLStack368,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack368);
        pLVar7 = aLStack352;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_THROW_ROPE_END);
    iVar3 = lib::L2CValue::as_integer(aLStack152);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_120,true);
    uVar6 = lib::L2CValue::operator__(aLStack136,(L2CValue *)&local_120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack152);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_120,_FIGHTER_GAOGAEN_GENERATE_ARTICLE_ROPE);
      lib::L2CValue::L2CValue(aLStack136,_WEAPON_GAOGAEN_ROPE_STATUS_KIND_END);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
      iVar4 = lib::L2CValue::as_integer(aLStack136);
      app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    }
    lib::L2CValue::L2CValue(aLStack168,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack184,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x58,(L2CValue)0x48);
    lib::L2CValue::_L2CValue(aLStack184);
    pLVar7 = aLStack168;
  }
LAB_7100022520:
  lib::L2CValue::_L2CValue(pLVar7);
LAB_7100022524:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

