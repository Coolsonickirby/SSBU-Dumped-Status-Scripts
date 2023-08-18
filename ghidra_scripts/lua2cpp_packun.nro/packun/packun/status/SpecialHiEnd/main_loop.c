
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::SpecialHiEnd_main_loop(L2CFighterPackun *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  FighterEntryID FVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  FighterInformation *pFVar11;
  Hash40 HVar12;
  Hash40 HVar13;
  float fVar14;
  uint uVar15;
  long lVar16;
  int in_stack_fffffffffffffd74;
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
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong local_90;
  ulong uStack136;
  ulong local_80;
  ulong uStack120;
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_STATUS_FRAME);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar4);
  lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710002cc3c;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0x163e472735);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar4);
  uVar8 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar8 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PACKUN_STATUS_KIND_SPECIAL_HI_LANDING);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + '`'),(L2CValue)(cVar1 + 'P'));
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x16e6eb831f);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack208,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1d140d59fe);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack224,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar3 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::operator_(aLStack160,aLStack208);
    uVar8 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar8 & 1) != 0) goto LAB_710002c350;
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_DIVE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_DIVE_DONE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        fVar14 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                  (this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack240,fVar14);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x6e5ec7051);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf3e7d6011);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar8,uVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
        uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_70);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lVar16 = -0x70;
LAB_710002cc14:
          lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar16));
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1d);
          lib::L2CValue::L2CValue(aLStack272,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack288,0x168f5191f3);
          uVar8 = lib::L2CValue::as_integer(aLStack272);
          uVar9 = lib::L2CValue::as_integer(aLStack288);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
          lib::L2CValue::L2CValue(aLStack256,iVar4);
          uVar8 = lib::L2CValue::operator_(pLVar7,aLStack256);
          if ((uVar8 & 1) == 0) {
            uVar8 = 0;
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            uVar8 = lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
            uVar8 = uVar8 & 0xffffffff;
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          }
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,0xcca113a7f);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
            uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_70);
            uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (this->moduleAccessor,uVar8,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar14);
            lib::L2CValue::operator_((L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            uVar8 = lib::L2CValue::operator__(aLStack256,aLStack240);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
              iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
              lib::L2CValue::L2CValue(aLStack272,iVar4);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              FVar5 = lib::L2CValue::as_integer(aLStack272);
              pvVar10 = (void *)app::lua_bind::FighterManager__get_fighter_information_impl
                                          (LUA_SCRIPT_LINE_STATUS_SHIFT,FVar5);
              lib::L2CValue::L2CValue(aLStack288,pvVar10);
              pFVar11 = (FighterInformation *)lib::L2CValue::as_pointer(aLStack288);
              fVar14 = (float)app::lua_bind::FighterInformation__gravity_impl(pFVar11);
              lib::L2CValue::L2CValue(aLStack304,fVar14);
              fVar14 = (float)app::lua_bind::BattleObjectWorld__gravity_speed_coefficient_impl
                                        (LUA_SCRIPT_LINE_MAP_CORRECTION);
              lib::L2CValue::L2CValue(aLStack320,fVar14);
              lib::L2CValue::operator_(aLStack256,aLStack304);
              lib::L2CValue::operator_((L2CValue *)&local_70,aLStack320);
              lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
              app::sv_kinetic_energy::set_speed(this->luaStateAgent);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
              app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
              app::sv_kinetic_energy::set_accel(this->luaStateAgent);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_60,_FIGHTER_PACKUN_STATUS_SPECIAL_HI_DIVE_DONE);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
              app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lua2cpp::L2CFighterCommon::check_mach_stamp(this);
              lib::L2CValue::L2CValue(aLStack352,0x11345bc2de);
              lib::L2CValue::L2CValue(aLStack368,0x35dbfe258);
              lib::L2CValue::L2CValue(aLStack384,0.0);
              lib::L2CValue::L2CValue(aLStack400,4.0);
              lib::L2CValue::L2CValue(aLStack416,8.0);
              lib::L2CValue::L2CValue(aLStack432,0.0);
              lib::L2CValue::L2CValue(aLStack448,0.0);
              lib::L2CValue::L2CValue(aLStack464,0.0);
              lib::L2CValue::L2CValue(aLStack480,1.1);
              lib::L2CValue::L2CValue(aLStack496,18.0);
              lib::L2CValue::L2CValue(aLStack512,12.0);
              lib::L2CValue::L2CValue(aLStack528,0.0);
              lib::L2CValue::L2CValue(aLStack544,0.0);
              lib::L2CValue::L2CValue(aLStack560,0.0);
              lib::L2CValue::L2CValue(aLStack576,0.0);
              lib::L2CValue::L2CValue(aLStack592,false);
              HVar12 = lib::L2CValue::as_hash(aLStack352);
              HVar13 = lib::L2CValue::as_hash(aLStack368);
              uVar8 = lib::L2CValue::as_number(aLStack384);
              lVar16 = lib::L2CValue::as_number(aLStack400);
              uVar15 = lib::L2CValue::as_number(aLStack416);
              local_60 = uVar8 & 0xffffffff | lVar16 << 0x20;
              uStack88 = (ulong)uVar15;
              uVar8 = lib::L2CValue::as_number(aLStack432);
              lVar16 = lib::L2CValue::as_number(aLStack448);
              uVar15 = lib::L2CValue::as_number(aLStack464);
              local_70 = uVar8 & 0xffffffff | lVar16 << 0x20;
              uStack104 = (ulong)uVar15;
              fVar14 = (float)lib::L2CValue::as_number(aLStack480);
              uVar8 = lib::L2CValue::as_number(aLStack496);
              lVar16 = lib::L2CValue::as_number(aLStack512);
              uVar15 = lib::L2CValue::as_number(aLStack528);
              local_80 = uVar8 & 0xffffffff | lVar16 << 0x20;
              uStack120 = (ulong)uVar15;
              uVar8 = lib::L2CValue::as_number(aLStack544);
              lVar16 = lib::L2CValue::as_number(aLStack560);
              uVar15 = lib::L2CValue::as_number(aLStack576);
              local_90 = uVar8 & 0xffffffff | lVar16 << 0x20;
              uStack136 = (ulong)uVar15;
              bVar3 = lib::L2CValue::as_bool(aLStack592);
              uVar15 = app::lua_bind::EffectModule__req_on_joint_impl
                                 (this->moduleAccessor,HVar12,HVar13,(Vector3f *)&local_60,
                                  (Vector3f *)&local_70,fVar14,(Vector3f *)&local_80,
                                  (Vector3f *)&local_90,(bool)(bVar3 & 1),0,
                                  in_stack_fffffffffffffd74,0);
              lib::L2CValue::L2CValue(aLStack336,uVar15);
              lib::L2CValue::_L2CValue(aLStack336);
              lib::L2CValue::_L2CValue(aLStack592);
              lib::L2CValue::_L2CValue(aLStack576);
              lib::L2CValue::_L2CValue(aLStack560);
              lib::L2CValue::_L2CValue(aLStack544);
              lib::L2CValue::_L2CValue(aLStack528);
              lib::L2CValue::_L2CValue(aLStack512);
              lib::L2CValue::_L2CValue(aLStack496);
              lib::L2CValue::_L2CValue(aLStack480);
              lib::L2CValue::_L2CValue(aLStack464);
              lib::L2CValue::_L2CValue(aLStack448);
              lib::L2CValue::_L2CValue(aLStack432);
              lib::L2CValue::_L2CValue(aLStack416);
              lib::L2CValue::_L2CValue(aLStack400);
              lib::L2CValue::_L2CValue(aLStack384);
              lib::L2CValue::_L2CValue(aLStack368);
              lib::L2CValue::_L2CValue(aLStack352);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_80,
                         _FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
              iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar4);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_60,_FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_NONE);
              uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              if ((uVar8 & 1) == 0) {
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_60,
                           _FIGHTER_PACKUN_SPECIAL_HI_TILT_INERTIA_STATUS_TO_CENTER_DIVE);
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_70,
                           _FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_INERTIA_STATUS);
                iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
                iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
                app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
                lib::L2CValue::_L2CValue((L2CValue *)&local_70);
                lib::L2CValue::_L2CValue((L2CValue *)&local_60);
                lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_70,
                           _FIGHTER_PACKUN_STATUS_SPECIAL_HI_WORK_INT_PENDULUM_FRAME);
                iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
                iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
                app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
                lib::L2CValue::_L2CValue((L2CValue *)&local_70);
                lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              }
              lib::L2CValue::_L2CValue(aLStack320);
              lib::L2CValue::_L2CValue(aLStack304);
              lib::L2CValue::_L2CValue(aLStack288);
              lib::L2CValue::_L2CValue(aLStack272);
            }
            lVar16 = -0xf0;
            goto LAB_710002cc14;
          }
        }
        lib::L2CValue::_L2CValue(aLStack240);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
LAB_710002c350:
    lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_STATUS_KIND_FALL_SPECIAL);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60))
    ;
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
LAB_710002cc3c:
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

