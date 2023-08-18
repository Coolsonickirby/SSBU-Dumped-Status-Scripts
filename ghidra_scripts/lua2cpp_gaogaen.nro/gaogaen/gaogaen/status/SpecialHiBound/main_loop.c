
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialHiBound_main_loop(L2CFighterGaogaen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  GroundCliffCheckKind GVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor *pBVar9;
  float *pfVar10;
  L2CValue *this_01;
  L2CValue *pLVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 in_s1;
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
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
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  Hash40MapEntry **local_70;
  ulonglong uStack104;
  void **local_60;
  lua_State *plStack88;
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
LAB_7100019660:
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                  (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack128,fVar12);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1c66fdc1ee);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack160,fVar12);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator_(aLStack160);
        uVar6 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack256,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack256);
          uVar14 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
          lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),(float)uVar14);
          lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar14 >> 0x20));
          lib::L2CValue::L2CValue((L2CValue *)&local_60,(L2CValue *)(auStack256 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack224);
          lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)auStack256);
          pLVar11 = (L2CValue *)0x1fbdb2615;
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
          lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar11);
          pLVar11 = aLStack160;
          lib::L2CValue::operator_(aLStack272,pLVar11);
          lib::L2CAgent::math_abs((L2CAgent *)auStack256,pLVar11);
          lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack256);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue(aLStack208);
        }
        this_00 = &this->globalTable;
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          uVar6 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
            lib::L2CValue::L2CValue(aLStack208,0x2924078ef1);
            uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            uVar7 = lib::L2CValue::as_integer(aLStack208);
            fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (this->moduleAccessor,uVar6,uVar7);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::L2CValue(aLStack208,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
            iVar3 = lib::L2CValue::as_integer(aLStack208);
            fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                      (this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_ENERGY_ID_STOP);
            lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)&local_60);
            lib::L2CValue::L2CValue(aLStack272,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack256);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
            app::sv_kinetic_energy::set_speed(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue((L2CValue *)auStack256);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
            iVar3 = lib::L2CValue::as_integer(aLStack208);
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
            app::KineticUtility::clear_unable_energy(iVar3,pBVar9);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
            lib::L2CValue::L2CValue(aLStack304,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            goto LAB_710001a278;
          }
        }
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_BOUND_CLIFF_STOP)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack208);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
        uVar6 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _FIGHTER_GAOGAEN_CLIFF_HANG_DATA_SPECIAL_HI_BOUND_CLIFF_CHECK);
          lib::L2CValue::L2CValue(aLStack208,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          GVar5 = lib::L2CValue::as_integer(aLStack208);
          bVar2 = app::lua_bind::GroundModule__can_entry_cliff_hang_data_impl
                            (this->moduleAccessor,uVar4,GVar5);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((bVar1 & 1U) != 0) {
            fVar12 = (float)app::lua_bind::GroundModule__hang_can_entry_cliff_dir_impl
                                      (this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack208,fVar12);
            fVar12 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar12);
            lib::L2CValue::operator_(aLStack208,(L2CValue *)auStack256);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)auStack256);
            lib::L2CValue::_L2CValue(aLStack208);
            if ((uVar6 & 1) != 0) {
              pfVar10 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack352,*pfVar10);
              lib::L2CValue::L2CValue(aLStack336,pfVar10[1]);
              lib::L2CValue::L2CValue(aLStack320,pfVar10[2]);
              FUN_710001a800(aLStack208,this,aLStack352);
              lib::L2CValue::_L2CValue(aLStack320);
              lib::L2CValue::_L2CValue(aLStack336);
              lib::L2CValue::_L2CValue(aLStack352);
              pfVar10 = (float *)app::lua_bind::PostureModule__prev_pos_impl(this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack400,*pfVar10);
              lib::L2CValue::L2CValue(aLStack384,pfVar10[1]);
              lib::L2CValue::L2CValue(aLStack368,pfVar10[2]);
              FUN_710001a800(auStack256,this,aLStack400);
              lib::L2CValue::_L2CValue(aLStack368);
              lib::L2CValue::_L2CValue(aLStack384);
              lib::L2CValue::_L2CValue(aLStack400);
              pfVar10 = (float *)app::lua_bind::GroundModule__hang_can_entry_cliff_pos_impl
                                           (this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack432,*pfVar10);
              lib::L2CValue::L2CValue(aLStack416,pfVar10[1]);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack432);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack416);
              lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::_L2CValue(aLStack416);
              lib::L2CValue::_L2CValue(aLStack432);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              uVar13 = app::sv_camera_manager::dead_range(this->luaStateAgent);
              local_60 = (void **)CONCAT44(in_s1,uVar13);
              app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_60);
              pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
              pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x6895f72a4);
              lib::L2CValue::operator_(pLVar8,pLVar11);
              lib::L2CAgent::math_abs((L2CAgent *)&local_60,pLVar11);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::L2CValue(aLStack496,0x1086bc4a93);
              lib::L2CValue::L2CValue(aLStack512,0x2e06bdca57);
              uVar6 = lib::L2CValue::as_integer(aLStack496);
              uVar7 = lib::L2CValue::as_integer(aLStack512);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (this->moduleAccessor,uVar6,uVar7);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,10.0);
              lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::_L2CValue(aLStack512);
              lib::L2CValue::_L2CValue(aLStack496);
              fVar12 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
              lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_70);
              lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue(aLStack512,0x1086bc4a93);
              lib::L2CValue::L2CValue(aLStack528,0x2e71bafac1);
              uVar6 = lib::L2CValue::as_integer(aLStack512);
              uVar7 = lib::L2CValue::as_integer(aLStack528);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (this->moduleAccessor,uVar6,uVar7);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,10.0);
              lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::_L2CValue(aLStack528);
              lib::L2CValue::_L2CValue(aLStack512);
              lib::L2CValue::operator_(aLStack464,aLStack496);
              lib::L2CValue::operator_(aLStack464,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
              lib::L2CValue::operator_(pLVar8,aLStack480);
              pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
              lib::L2CValue::operator_(pLVar8,aLStack496);
              lib::L2CValue::L2CValue(aLStack560,0.0);
              lib::L2CValue::operator_(aLStack464);
              lib::L2CValue::L2CValue(aLStack592,true);
              uVar6 = lib::L2CValue::as_number(aLStack528);
              uVar4 = lib::L2CValue::as_number(aLStack544);
              local_60 = (void **)(uVar6 & 0xffffffff | (ulong)uVar4 << 0x20);
              plStack88 = (lua_State *)0x0;
              uVar6 = lib::L2CValue::as_number(aLStack560);
              uVar4 = lib::L2CValue::as_number(aLStack576);
              local_70 = (Hash40MapEntry **)(uVar6 & 0xffffffff | (ulong)uVar4 << 0x20);
              uStack104 = 0;
              bVar2 = lib::L2CValue::as_bool(aLStack592);
              bVar2 = app::lua_bind::GroundModule__ray_check_impl
                                (this->moduleAccessor,(Vector2f *)&local_60,(Vector2f *)&local_70,
                                 (bool)(bVar2 & 1));
              lib::L2CValue::L2CValue(aLStack512,(bool)(bVar2 & 1));
              lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
              uVar6 = lib::L2CValue::operator__(aLStack512,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::_L2CValue(aLStack512);
              lib::L2CValue::_L2CValue(aLStack592);
              lib::L2CValue::_L2CValue(aLStack576);
              lib::L2CValue::_L2CValue(aLStack560);
              lib::L2CValue::_L2CValue(aLStack544);
              lib::L2CValue::_L2CValue(aLStack528);
              if ((uVar6 & 1) != 0) {
                pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
                pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
                this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x162d277af);
                uVar6 = lib::L2CValue::as_number(pLVar8);
                lVar15 = lib::L2CValue::as_number(pLVar11);
                uVar4 = lib::L2CValue::as_number(this_01);
                local_60 = (void **)(uVar6 & 0xffffffff | lVar15 << 0x20);
                plStack88 = (lua_State *)(ulong)uVar4;
                app::lua_bind::PostureModule__set_pos_impl
                          (this->moduleAccessor,(Vector3f *)&local_60);
                lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
                pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
                iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
                pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
                app::KineticUtility::clear_unable_energy(iVar3,pBVar9);
                lib::L2CValue::_L2CValue((L2CValue *)&local_60);
                lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
                pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
                iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
                pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
                app::KineticUtility::clear_unable_energy(iVar3,pBVar9);
                lib::L2CValue::_L2CValue((L2CValue *)&local_60);
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_60,
                           _FIGHTER_GAOGAEN_STATUS_SPECIAL_HI_FLAG_BOUND_CLIFF_STOP);
                iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
                app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
                lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              }
              lib::L2CValue::_L2CValue(aLStack496);
              lib::L2CValue::_L2CValue(aLStack480);
              lib::L2CValue::_L2CValue(aLStack464);
              lib::L2CValue::_L2CValue(aLStack448);
              lib::L2CValue::_L2CValue(aLStack272);
              lib::L2CValue::_L2CValue((L2CValue *)auStack256);
              lib::L2CValue::_L2CValue(aLStack208);
            }
          }
        }
        FUN_710001a8c0(this);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001a278:
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        return;
      }
      lib::L2CValue::L2CValue(aLStack176,FIGHTER_STATUS_KIND_FALL_SPECIAL);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      iVar3 = 0;
      goto LAB_7100019560;
    }
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      uVar6 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar6 & 1) != 0) goto LAB_7100019660;
    }
  }
  iVar3 = 1;
LAB_7100019560:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

