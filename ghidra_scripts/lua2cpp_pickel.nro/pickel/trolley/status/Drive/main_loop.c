
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelTrolley::status::Drive_main_loop(L2CWeaponPickelTrolley *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  GroundTouchID GVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  Weapon *pWVar11;
  Hash40 HVar12;
  L2CValue *pLVar13;
  void *pvVar14;
  float *pfVar15;
  BattleObjectModuleAccessor *pBVar16;
  GroundCollisionLine *pGVar17;
  GroundCollisionLine *pGVar18;
  undefined8 *puVar19;
  BattleObjectModuleAccessor **ppBVar20;
  float fVar21;
  float fVar22;
  long lVar23;
  undefined8 uVar24;
  L2CValue aLStack1472 [16];
  L2CValue aLStack1456 [16];
  L2CValue aLStack1440 [16];
  L2CValue aLStack1424 [16];
  L2CValue aLStack1408 [16];
  L2CValue aLStack1392 [16];
  L2CValue aLStack1376 [16];
  L2CValue aLStack1360 [16];
  L2CValue aLStack1344 [16];
  L2CValue aLStack1328 [16];
  L2CValue aLStack1312 [16];
  L2CValue aLStack1296 [16];
  L2CValue aLStack1280 [16];
  L2CValue aLStack1264 [16];
  L2CValue aLStack1248 [16];
  L2CValue aLStack1232 [16];
  L2CValue aLStack1216 [16];
  L2CValue aLStack1200 [16];
  L2CValue aLStack1184 [16];
  L2CValue aLStack1168 [16];
  L2CValue aLStack1152 [16];
  L2CValue aLStack1136 [16];
  L2CValue aLStack1120 [16];
  L2CValue aLStack1104 [16];
  L2CValue aLStack1088 [16];
  L2CValue aLStack1072 [16];
  L2CValue aLStack1056 [16];
  L2CValue aLStack1040 [16];
  L2CValue aLStack1024 [16];
  L2CValue aLStack1008 [16];
  L2CValue aLStack992 [16];
  undefined local_3d0 [32];
  L2CValue aLStack944 [16];
  L2CValue aLStack928 [16];
  L2CValue aLStack912 [16];
  L2CValue aLStack896 [16];
  undefined8 auStack880 [2];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
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
  undefined auStack384 [32];
  undefined auStack352 [32];
  L2CValue aLStack320 [16];
  undefined8 auStack304 [2];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined8 auStack256 [2];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 auStack128 [2];
  
  lib::L2CValue::L2CValue((L2CValue *)auStack128,_WEAPON_LINK_NO_CONSTRAINT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  ppBVar20 = &this->moduleAccessor;
  bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar20,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack128,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0xdfbf78d6f);
      lib::L2CValue::L2CValue(aLStack144,0x251dea32d0);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      uVar9 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar20,uVar8,uVar9);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,iVar4);
      lib::L2CValue::L2CValue
                (aLStack160,
                 _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      iVar5 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  puVar19 = auStack128;
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)puVar19);
  fVar21 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,fVar21);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CAgent::math_abs((L2CAgent *)local_3d0,(L2CValue *)puVar19);
  lib::L2CValue::L2CValue(aLStack160,0xdfbf78d6f);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0x1d61fae759);
  uVar8 = lib::L2CValue::as_integer(aLStack160);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
  fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack144,fVar21);
  uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)auStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack128,0);
    lib::L2CValue::L2CValue
              (aLStack144,
               _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    iVar5 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  FUN_71000af080(this);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,_WEAPON_PICKEL_TROLLEY_LINK_NO_CAPTURE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar20,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack128,_FIGHTER_LINK_NO_PICKEL_TROLLEY);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    bVar1 = app::lua_bind::LinkModule__is_linked_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
LAB_71000a7160:
      bVar2 = false;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),_FIGHTER_PICKEL_LINK_NO_TROLLEY);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
      bVar1 = app::lua_bind::LinkModule__is_linked_impl(*ppBVar20,iVar4);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack160);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      if ((bVar2 & 1U) == 0) goto LAB_71000a7160;
      bVar2 = true;
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack192,bVar2);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack128,_WEAPON_PICKEL_TROLLEY_LINK_NO_CAPTURE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      fVar21 = (float)app::lua_bind::LinkModule__get_parent_scale_impl(*ppBVar20,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,fVar21);
      fVar21 = (float)lib::L2CValue::as_number((L2CValue *)local_3d0);
      app::lua_bind::PostureModule__set_scale_impl(*ppBVar20,fVar21,false);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      puVar19 = auStack128;
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack128,
                 _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_SCALE_ON_CATCHED_FIGHTER);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      fVar21 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar20,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,fVar21);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::L2CValue(aLStack160,_WEAPON_PICKEL_TROLLEY_LINK_NO_CAPTURE);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      fVar21 = (float)app::lua_bind::LinkModule__get_parent_scale_impl(*ppBVar20,iVar4);
      lib::L2CValue::L2CValue(aLStack144,fVar21);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)local_3d0);
      fVar21 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
      app::lua_bind::PostureModule__set_scale_impl(*ppBVar20,fVar21,false);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      puVar19 = (undefined8 *)local_3d0;
    }
    lib::L2CValue::_L2CValue((L2CValue *)puVar19);
  }
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack128,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,-1);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack128,
             _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_CURRENT_POWERED_RAIL_OBJECT_GENERATION);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  this_00 = &this->globalTable;
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pWVar11 = (Weapon *)lib::L2CValue::as_pointer(pLVar10);
  app::WeaponSpecializer_PickelTrolley::send_link_event_nodes_check_collision(pWVar11);
  fVar21 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,-1);
  lib::L2CValue::L2CValue(aLStack160,fVar21);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_3d0);
  fVar21 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),fVar21);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_KINETIC_ENERGY_ID_JOSTLE);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_3d0);
  fVar21 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar21);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_LR_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
      uVar8 = lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),(L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
        uVar8 = lib::L2CValue::operator_((L2CValue *)local_3d0,(L2CValue *)(auStack192 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        if ((uVar8 & 1) != 0) {
          fVar21 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar20);
          lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,1.0);
          uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue((L2CValue *)auStack128);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,1.0);
            fVar21 = (float)lib::L2CValue::as_number((L2CValue *)local_3d0);
            app::lua_bind::PostureModule__set_lr_impl(*ppBVar20,fVar21);
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
            app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar20);
            lib::L2CValue::L2CValue(aLStack224,true);
            FUN_71000afb10(this,aLStack224);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::L2CValue((L2CValue *)auStack128,_FIGHTER_LINK_NO_PICKEL_TROLLEY);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
            bVar1 = app::lua_bind::LinkModule__is_linked_impl(*ppBVar20,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue((L2CValue *)auStack128);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)local_3d0,_FIGHTER_LINK_NO_PICKEL_TROLLEY);
              lib::L2CValue::L2CValue((L2CValue *)auStack128,0x217cab20e7);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
              HVar12 = lib::L2CValue::as_hash((L2CValue *)auStack128);
              app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar20,iVar4,HVar12,0);
              goto LAB_71000a76f0;
            }
          }
        }
      }
      else {
        fVar21 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar20);
        lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,-1.0);
        uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack128);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,-1.0);
          fVar21 = (float)lib::L2CValue::as_number((L2CValue *)local_3d0);
          app::lua_bind::PostureModule__set_lr_impl(*ppBVar20,fVar21);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar20);
          lib::L2CValue::L2CValue(aLStack208,true);
          FUN_71000afb10(this,aLStack208);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::L2CValue((L2CValue *)auStack128,_FIGHTER_LINK_NO_PICKEL_TROLLEY);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
          bVar1 = app::lua_bind::LinkModule__is_linked_impl(*ppBVar20,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue((L2CValue *)auStack128);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,_FIGHTER_LINK_NO_PICKEL_TROLLEY);
            lib::L2CValue::L2CValue((L2CValue *)auStack128,0x217cab20e7);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
            HVar12 = lib::L2CValue::as_hash((L2CValue *)auStack128);
            app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar20,iVar4,HVar12,0);
LAB_71000a76f0:
            lib::L2CValue::_L2CValue((L2CValue *)auStack128);
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack128,
             GROUND_TOUCH_FLAG_UP_LEFT | _GROUND_TOUCH_FLAG_LEFT | GROUND_TOUCH_FLAG_RIGHT |
             GROUND_TOUCH_FLAG_UP_RIGHT);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar20,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_IS_WALL);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar20,iVar4);
    puVar19 = (undefined8 *)local_3d0;
LAB_71000a86d4:
    lib::L2CValue::_L2CValue((L2CValue *)puVar19);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
      uVar8 = lib::L2CValue::operator_(aLStack160,(L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      if ((uVar8 & 1) == 0) goto LAB_71000a7834;
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack256,GROUND_TOUCH_FLAG_UP_LEFT | _GROUND_TOUCH_FLAG_LEFT);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar20,uVar6);
      lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack240);
      if ((bVar2 & 1U) == 0) {
        bVar2 = true;
        goto LAB_71000a7838;
      }
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack256);
LAB_71000a78f0:
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_IS_WALL);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar20,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,(bool)(bVar1 & 1));
      lib::L2CValue::operator_((L2CValue *)auStack128);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
        uVar8 = lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),(L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_IS_WALL_LEFT
                    );
          pLVar10 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)local_3d0);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar20,(int)pLVar10);
        }
        else {
          lib::L2CValue::L2CValue
                    ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_IS_WALL_LEFT
                    );
          pLVar10 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)local_3d0);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar20,(int)pLVar10);
        }
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
        lib::L2CValue::L2CValue(aLStack144,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack272,0x25010be49f);
        uVar8 = lib::L2CValue::as_integer(aLStack144);
        uVar9 = lib::L2CValue::as_integer(aLStack272);
        fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
        lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
        puVar19 = auStack128;
        uVar8 = lib::L2CValue::operator__((L2CValue *)local_3d0,(L2CValue *)puVar19);
        lib::L2CValue::_L2CValue((L2CValue *)auStack128);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        if ((uVar8 & 1) == 0) {
          lib::L2CAgent::math_abs((L2CAgent *)aLStack160,(L2CValue *)puVar19);
          lib::L2CValue::L2CValue(aLStack144,0xdfbf78d6f);
          lib::L2CValue::L2CValue(aLStack272,0x22bfc0699f);
          uVar8 = lib::L2CValue::as_integer(aLStack144);
          uVar9 = lib::L2CValue::as_integer(aLStack272);
          fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
          lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
          puVar19 = auStack128;
          uVar8 = lib::L2CValue::operator__((L2CValue *)local_3d0,(L2CValue *)puVar19);
          lib::L2CValue::_L2CValue((L2CValue *)auStack128);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          if ((uVar8 & 1) == 0) {
            lib::L2CAgent::math_abs((L2CAgent *)aLStack160,(L2CValue *)puVar19);
            lib::L2CValue::L2CValue(aLStack144,0xdfbf78d6f);
            lib::L2CValue::L2CValue(aLStack272,0x2232c8646a);
            uVar8 = lib::L2CValue::as_integer(aLStack144);
            uVar9 = lib::L2CValue::as_integer(aLStack272);
            fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
            uVar8 = lib::L2CValue::operator_((L2CValue *)local_3d0,(L2CValue *)auStack128);
            lib::L2CValue::_L2CValue((L2CValue *)auStack128);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
            if ((uVar8 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x10e9b2ce40);
              lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
              lib::L2CValue::L2CValue(aLStack144,1.0);
              lib::L2CValue::L2CValue(aLStack272,false);
              HVar12 = lib::L2CValue::as_hash((L2CValue *)local_3d0);
              fVar21 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
              fVar22 = (float)lib::L2CValue::as_number(aLStack144);
              bVar1 = lib::L2CValue::as_bool(aLStack272);
              app::lua_bind::MotionModule__change_motion_impl
                        (*ppBVar20,HVar12,fVar21,fVar22,(bool)(bVar1 & 1),0.0,false,false);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x109eb5fed6);
              lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
              lib::L2CValue::L2CValue(aLStack144,1.0);
              lib::L2CValue::L2CValue(aLStack272,false);
              HVar12 = lib::L2CValue::as_hash((L2CValue *)local_3d0);
              fVar21 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
              fVar22 = (float)lib::L2CValue::as_number(aLStack144);
              bVar1 = lib::L2CValue::as_bool(aLStack272);
              app::lua_bind::MotionModule__change_motion_impl
                        (*ppBVar20,HVar12,fVar21,fVar22,(bool)(bVar1 & 1),0.0,false,false);
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x1064bac3b5);
            lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,1.0);
            lib::L2CValue::L2CValue(aLStack272,false);
            HVar12 = lib::L2CValue::as_hash((L2CValue *)local_3d0);
            fVar21 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
            fVar22 = (float)lib::L2CValue::as_number(aLStack144);
            bVar1 = lib::L2CValue::as_bool(aLStack272);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar20,HVar12,fVar21,fVar22,(bool)(bVar1 & 1),0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)auStack128);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_IS_WALL);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar20,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      }
      uVar6 = app::lua_bind::GroundModule__ground_touch_flag_impl(*ppBVar20);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
      uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      if ((uVar8 & 1) == 0) {
        uVar6 = app::lua_bind::GroundModule__ground_touch_flag_impl(*ppBVar20);
        lib::L2CValue::L2CValue(aLStack272,uVar6);
        uVar6 = lib::L2CValue::as_integer(aLStack272);
        iVar4 = app::lua_bind::GroundModule__get_touch_material_type_impl(*ppBVar20,uVar6);
        lib::L2CValue::L2CValue(aLStack288,iVar4);
        FUN_71000a5280(aLStack144,aLStack288);
        lib::L2CValue::operator_(aLStack144);
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue((L2CValue *)auStack128);
        if ((bVar2 & 1U) == 0) goto LAB_71000a86d8;
      }
      else {
        lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      }
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::operator_(aLStack160);
        lib::L2CValue::L2CValue((L2CValue *)auStack304,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack320,0x1361ed983b);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack304);
        uVar9 = lib::L2CValue::as_integer(aLStack320);
        fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
        lib::L2CValue::L2CValue(aLStack272,fVar21);
        lib::L2CValue::operator_(aLStack144,aLStack272);
        lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
      }
      else {
        lib::L2CValue::operator_(aLStack160);
        lib::L2CValue::L2CValue((L2CValue *)auStack304,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack320,0x17f444eb86);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack304);
        uVar9 = lib::L2CValue::as_integer(aLStack320);
        fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
        lib::L2CValue::L2CValue(aLStack272,fVar21);
        lib::L2CValue::operator_(aLStack144,aLStack272);
        lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
      }
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0xdfbf78d6f);
      lib::L2CValue::L2CValue(aLStack272,0x21393f434d);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      uVar9 = lib::L2CValue::as_integer(aLStack272);
      fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack144,fVar21);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue(aLStack272,false);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack320,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND);
        iVar4 = lib::L2CValue::as_integer(aLStack320);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)auStack304,iVar4);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_POWERED_RAIL);
        uVar8 = lib::L2CValue::operator__((L2CValue *)auStack304,(L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        lib::L2CValue::_L2CValue(aLStack320);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
          pLVar10 = (L2CValue *)local_3d0;
          lib::L2CValue::operator_(aLStack144,pLVar10);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          lib::L2CAgent::math_abs((L2CAgent *)auStack128,pLVar10);
          lib::L2CValue::L2CValue(aLStack320,0xdfbf78d6f);
          lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0x21393f434d);
          uVar8 = lib::L2CValue::as_integer(aLStack320);
          uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack352 + 0x10));
          fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
          lib::L2CValue::L2CValue((L2CValue *)auStack304,fVar21);
          uVar8 = lib::L2CValue::operator_((L2CValue *)local_3d0,(L2CValue *)auStack304);
          lib::L2CValue::_L2CValue((L2CValue *)auStack304);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack320,0xdfbf78d6f);
            lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0x21393f434d);
            uVar8 = lib::L2CValue::as_integer(aLStack320);
            uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack352 + 0x10));
            fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)auStack304,fVar21);
            lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),(L2CValue *)auStack128);
            lua2cpp::L2CFighterBase::sign(this,(L2CValue)0x90);
            lib::L2CValue::operator_((L2CValue *)auStack304,(L2CValue *)auStack352);
            lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue((L2CValue *)auStack352);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack384 + 0x10));
            lib::L2CValue::_L2CValue((L2CValue *)auStack304);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
            lib::L2CValue::operator_(aLStack272,(L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          }
        }
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack304,GROUND_TOUCH_FLAG_UP_LEFT | _GROUND_TOUCH_FLAG_LEFT);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack304);
      uVar6 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar20,uVar6);
      pLVar10 = (L2CValue *)(ulong)(uVar6 & 1);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,SUB41(uVar6 & 1,0));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        puVar19 = auStack304;
LAB_71000a8348:
        lib::L2CValue::_L2CValue((L2CValue *)puVar19);
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack352 + 0x10),
                   GROUND_TOUCH_FLAG_UP_RIGHT | GROUND_TOUCH_FLAG_RIGHT);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack352 + 0x10));
        uVar6 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar20,uVar6);
        pLVar10 = (L2CValue *)(ulong)(uVar6 & 1);
        lib::L2CValue::L2CValue(aLStack320,SUB41(uVar6 & 1,0));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack320);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,765.0);
          pLVar10 = (L2CValue *)local_3d0;
          lib::L2CValue::operator_(aLStack144,pLVar10);
          puVar19 = (undefined8 *)local_3d0;
          goto LAB_71000a8348;
        }
      }
      lib::L2CAgent::math_abs((L2CAgent *)auStack128,pLVar10);
      uVar8 = lib::L2CValue::operator_((L2CValue *)local_3d0,aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CValue::L2CValue((L2CValue *)auStack304,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_3d0);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack304);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CValue::L2CValue((L2CValue *)auStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_3d0);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack304);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
        app::sv_kinetic_energy::set_accel(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::operator_(aLStack272);
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack320,0xdfbf78d6f);
          lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0x120b6b3d90);
          uVar8 = lib::L2CValue::as_integer(aLStack320);
          uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack352 + 0x10));
          lVar23 = app::lua_bind::WorkModule__get_param_int64_impl(*ppBVar20,uVar8,uVar9);
          lib::L2CValue::L2CValue((L2CValue *)auStack304,lVar23);
          lib::L2CValue::L2CValue((L2CValue *)auStack384,0xdfbf78d6f);
          lib::L2CValue::L2CValue(aLStack400,0x121d05e326);
          uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack384);
          uVar9 = lib::L2CValue::as_integer(aLStack400);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar20,uVar8,uVar9);
          lib::L2CValue::L2CValue((L2CValue *)auStack352,iVar4);
          HVar12 = lib::L2CValue::as_hash((L2CValue *)auStack304);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
          local_3d0._8_8_ = LUA_SCRIPT_STATUS_FUNC_EXEC_STOP;
          local_3d0._0_8_ = LUA_SCRIPT_LINE_WAZA_CUSTOMIZE;
          app::lua_bind::ShakeModule__req_time_scale_impl
                    (*ppBVar20,HVar12,iVar4,false,(Vector2f *)local_3d0,1.0,0.0,false,false,-1,1.0);
          lib::L2CValue::_L2CValue((L2CValue *)auStack352);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::_L2CValue((L2CValue *)auStack304);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::L2CValue((L2CValue *)auStack304,0xdfbf78d6f);
          lib::L2CValue::L2CValue(aLStack320,0x121d05e326);
          uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack304);
          uVar9 = lib::L2CValue::as_integer(aLStack320);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar20,uVar8,uVar9);
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,iVar4);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
          app::lua_bind::StopModule__set_other_stop_impl(*ppBVar20,iVar4,0);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue(aLStack320);
          puVar19 = auStack304;
          goto LAB_71000a86bc;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_3d0);
        app::sv_kinetic_energy::clear_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CValue::L2CValue((L2CValue *)auStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_3d0);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack304);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
        app::sv_kinetic_energy::set_accel(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        puVar19 = (undefined8 *)local_3d0;
LAB_71000a86bc:
        lib::L2CValue::_L2CValue((L2CValue *)puVar19);
      }
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack144);
      puVar19 = auStack128;
      goto LAB_71000a86d4;
    }
LAB_71000a7834:
    bVar2 = false;
LAB_71000a7838:
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)local_3d0,(L2CValue *)(auStack192 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
      uVar8 = lib::L2CValue::operator_((L2CValue *)local_3d0,aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack128,GROUND_TOUCH_FLAG_UP_RIGHT | GROUND_TOUCH_FLAG_RIGHT);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack128);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar20,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack128);
        if (bVar2) {
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue((L2CValue *)auStack256);
        }
        if ((bVar3 & 1U) != 0) goto LAB_71000a78f0;
        goto LAB_71000a86d8;
      }
    }
    if (bVar2) {
      lib::L2CValue::_L2CValue(aLStack240);
      puVar19 = auStack256;
      goto LAB_71000a86d4;
    }
  }
LAB_71000a86d8:
  bVar1 = app::lua_bind::AreaModule__is_water_impl(*ppBVar20);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)local_3d0,
               _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_SITUATION_KIND_WATER);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar20,iVar4);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_SITUATION_KIND_WATER);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,(bool)(bVar1 & 1));
    lib::L2CValue::operator_((L2CValue *)auStack128);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0x1901ddf025);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)auStack128);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar20,iVar4,HVar12,-1);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_ANIMCMD_SOUND);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0x18f38479da);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)auStack128);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar20,iVar4,HVar12,-1);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)local_3d0,
               _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_SITUATION_KIND_WATER);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar20,iVar4);
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar20);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((bVar2 & 1U) != 0) {
    FUN_71000a5130(local_3d0,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x153d5ce1f1);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack272,false);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)local_3d0);
      fVar21 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
      fVar22 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack272);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar20,HVar12,fVar21,fVar22,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_MOTION_PART_SET_KIND_ANIMCMD);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0x1d6aa43c45);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack272,1.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,true);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)auStack128);
      fVar21 = (float)lib::L2CValue::as_number(aLStack144);
      fVar22 = (float)lib::L2CValue::as_number(aLStack272);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack304);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (*ppBVar20,iVar4,HVar12,fVar21,fVar22,(bool)(bVar1 & 1),false,0.0,true,true,false);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0xfcb07f1ed);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack272,false);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)local_3d0);
      fVar21 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
      fVar22 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack272);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar20,HVar12,fVar21,fVar22,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_MOTION_PART_SET_KIND_ANIMCMD);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0x178753d926);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack272,1.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,true);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)auStack128);
      fVar21 = (float)lib::L2CValue::as_number(aLStack144);
      fVar22 = (float)lib::L2CValue::as_number(aLStack272);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack304);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (*ppBVar20,iVar4,HVar12,fVar21,fVar22,(bool)(bVar1 & 1),false,0.0,true,true,false);
    }
    lib::L2CValue::_L2CValue((L2CValue *)auStack304);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  }
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  pLVar10 = (L2CValue *)local_3d0;
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar10);
  fVar21 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CAgent::math_abs((L2CAgent *)auStack128,pLVar10);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
  uVar8 = lib::L2CValue::operator_((L2CValue *)local_3d0,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((uVar8 & 1) == 0) {
LAB_71000a8ddc:
    lib::L2CValue::_L2CValue(aLStack144);
LAB_71000a8de4:
    HVar12 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar20);
    lib::L2CValue::L2CValue(aLStack144,HVar12);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x18f0897390);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0xfcb07f1ed);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)local_3d0);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar20,HVar12,-1.0,1.0,0.0,false,false);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    }
    HVar12 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar20);
    lib::L2CValue::L2CValue(aLStack144,HVar12);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x1e647ed765);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x153d5ce1f1);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)local_3d0);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar20,HVar12,-1.0,1.0,0.0,false,false);
LAB_71000a8efc:
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    }
  }
  else {
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    if ((uVar8 & 1) == 0) goto LAB_71000a8ddc;
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack304,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack304);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue(aLStack272,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
    uVar8 = lib::L2CValue::operator__(aLStack272,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack304);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) goto LAB_71000a8de4;
    HVar12 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar20);
    lib::L2CValue::L2CValue(aLStack144,HVar12);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0xfcb07f1ed);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x18f0897390);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)local_3d0);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar20,HVar12,-1.0,1.0,0.0,false,false);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    }
    HVar12 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar20);
    lib::L2CValue::L2CValue(aLStack144,HVar12);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x153d5ce1f1);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x1e647ed765);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)local_3d0);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar20,HVar12,-1.0,1.0,0.0,false,false);
      goto LAB_71000a8efc;
    }
  }
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
  uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    uVar8 = lib::L2CValue::as_number((L2CValue *)auStack128);
    lVar23 = lib::L2CValue::as_number(aLStack144);
    uVar6 = lib::L2CValue::as_number(aLStack272);
    local_3d0._0_8_ = (void **)(uVar8 & 0xffffffff | lVar23 << 0x20);
    local_3d0._8_8_ = (lua_State *)(ulong)uVar6;
    app::lua_bind::ModelModule__set_render_offset_position_impl(*ppBVar20,(Vector3f *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack272);
    lVar23 = -0x80;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
    lib::L2CValue::L2CValue(aLStack272,0xdfbf78d6f);
    lib::L2CValue::L2CValue((L2CValue *)auStack304,0x1437f2e749);
    uVar8 = lib::L2CValue::as_integer(aLStack272);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack304);
    fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack144,fVar21);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    uVar8 = lib::L2CValue::as_number((L2CValue *)auStack128);
    lVar23 = lib::L2CValue::as_number(aLStack144);
    uVar6 = lib::L2CValue::as_number(aLStack320);
    local_3d0._0_8_ = (void **)(uVar8 & 0xffffffff | lVar23 << 0x20);
    local_3d0._8_8_ = (lua_State *)(ulong)uVar6;
    app::lua_bind::ModelModule__set_render_offset_position_impl(*ppBVar20,(Vector3f *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)auStack304);
    lVar23 = -0x100;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar23));
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::L2CValue(aLStack416,false);
  FUN_71000afb10(this,aLStack416);
  lib::L2CValue::_L2CValue(aLStack416);
  FUN_71000b0980(this);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,SITUATION_KIND_AIR);
  uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,-1);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack128,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_NO_GRAVITY_COUNT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_KINETIC_ENERGY_ID_GRAVITY);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    app::lua_bind::KineticModule__unable_energy_impl(*ppBVar20,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    pLVar10 = (L2CValue *)local_3d0;
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar10);
    app::sv_kinetic_energy::clear_speed(this->luaStateAgent);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_NO_GRAVITY_COUNT)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_KINETIC_ENERGY_ID_GRAVITY);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      app::lua_bind::KineticModule__unable_energy_impl(*ppBVar20,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      pLVar10 = (L2CValue *)local_3d0;
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar10);
      app::sv_kinetic_energy::clear_speed(this->luaStateAgent);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_KINETIC_ENERGY_ID_GRAVITY);
      pLVar10 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)local_3d0);
      app::lua_bind::KineticModule__enable_energy_impl(*ppBVar20,(int)pLVar10);
    }
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
  lib::L2CValue::L2CValue(aLStack144,0xdfbf78d6f);
  lib::L2CValue::L2CValue(aLStack272,0x19ee48c686);
  uVar8 = lib::L2CValue::as_integer(aLStack144);
  uVar9 = lib::L2CValue::as_integer(aLStack272);
  fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
  uVar8 = lib::L2CValue::operator__((L2CValue *)local_3d0,(L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
    app::lua_bind::JostleModule__set_status_impl(*ppBVar20,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_KINETIC_ENERGY_ID_JOSTLE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar20,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_KINETIC_ENERGY_ID_JOSTLE);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_3d0);
    app::sv_kinetic_energy::clear_speed(this->luaStateAgent);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
    app::lua_bind::JostleModule__set_status_impl(*ppBVar20,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_KINETIC_ENERGY_ID_JOSTLE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar20,iVar4);
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_NO_GRAVITY_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
  uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack144);
LAB_71000a9550:
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_NO_GRAVITY_COUNT)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)local_3d0,(L2CValue *)auStack128);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack448,false);
      lua2cpp::L2CWeaponCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x40);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue(aLStack448);
      if ((bVar2 & 1U) != 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack464,true);
          FUN_71000b35e0(this,aLStack464);
          pLVar10 = aLStack464;
          goto LAB_71000a9648;
        }
      }
    }
  }
  else {
    uVar6 = app::lua_bind::StopModule__is_stop_impl(*ppBVar20);
    pLVar10 = (L2CValue *)(ulong)(uVar6 & 1);
    lib::L2CValue::L2CValue(aLStack272,SUB41(uVar6 & 1,0));
    lib::L2CValue::operator_(aLStack272);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) goto LAB_71000a9550;
    lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)local_3d0,(L2CValue *)auStack128);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack432,false);
      FUN_71000b35e0(this,aLStack432);
      pLVar10 = aLStack432;
LAB_71000a9648:
      lib::L2CValue::_L2CValue(pLVar10);
    }
  }
  FUN_71000a5130(local_3d0,this);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_INSTANCE_WORK_ID_FLAG_NO_DEAD);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar20,iVar4);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_INSTANCE_WORK_ID_FLAG_NO_DEAD);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar20,iVar4);
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  FUN_71000a53a0(local_3d0,this);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack128,
               _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_PICKEL_RESTORE_TEAM_COUNT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    puVar19 = (undefined8 *)local_3d0;
LAB_71000a9890:
    lib::L2CValue::_L2CValue((L2CValue *)puVar19);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_PICKEL_RESTORE_TEAM_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) != 0) {
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
      pWVar11 = (Weapon *)lib::L2CValue::as_pointer(pLVar10);
      bVar1 = app::WeaponSpecializer_PickelTrolley::is_original_pickel_team(pWVar11);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,(bool)(bVar1 & 1));
      lib::L2CValue::operator_((L2CValue *)auStack128);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack128,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack144,0x2399453a53);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack128);
        uVar9 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar20,uVar8,uVar9);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,iVar4);
        lib::L2CValue::L2CValue
                  (aLStack272,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_PICKEL_RESTORE_TEAM_COUNT)
        ;
        iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
        iVar5 = lib::L2CValue::as_integer(aLStack272);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue(aLStack144);
        puVar19 = auStack128;
        goto LAB_71000a9890;
      }
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack128,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_MURABITO_SHOOT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar20,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  if ((bVar2 & 1U) == 0) {
    FUN_71000a5130(local_3d0,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_VACANT);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar20,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,(bool)(bVar1 & 1));
      lib::L2CValue::operator_((L2CValue *)auStack128);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_VACANT);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar20,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,1);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
        app::lua_bind::WorkModule__set_customize_no_impl(*ppBVar20,iVar4,0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      }
      lib::L2CValue::L2CValue
                (aLStack144,
                 _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DISABLE_ATTACK_COLLISION_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
      uVar8 = lib::L2CValue::operator_((L2CValue *)local_3d0,(L2CValue *)auStack128);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar8 & 1) == 0) {
        uVar6 = app::lua_bind::StopModule__is_stop_impl(*ppBVar20);
        pLVar10 = (L2CValue *)(ulong)(uVar6 & 1);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,SUB41(uVar6 & 1,0));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        if ((bVar2 & 1U) == 0) {
          lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
          lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar10);
          lib::L2CValue::operator_((L2CValue *)auStack128,aLStack144);
          lib::L2CValue::L2CValue((L2CValue *)auStack304,0xdfbf78d6f);
          lib::L2CValue::L2CValue(aLStack320,0x184ed8b4ea);
          uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack304);
          uVar9 = lib::L2CValue::as_integer(aLStack320);
          fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
          lib::L2CValue::L2CValue(aLStack272,fVar21);
          uVar8 = lib::L2CValue::operator__((L2CValue *)local_3d0,aLStack272);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue((L2CValue *)auStack304);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)auStack128);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,false);
            bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
            app::lua_bind::AttackModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
            lib::L2CValue::L2CValue((L2CValue *)auStack128,0xdfbf78d6f);
            lib::L2CValue::L2CValue(aLStack144,0x132a183e5b);
            uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack128);
            uVar9 = lib::L2CValue::as_integer(aLStack144);
            fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,fVar21);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue((L2CValue *)auStack128);
            lib::L2CValue::L2CValue(aLStack144,0xdfbf78d6f);
            lib::L2CValue::L2CValue(aLStack272,0x14acd56f11);
            uVar8 = lib::L2CValue::as_integer(aLStack144);
            uVar9 = lib::L2CValue::as_integer(aLStack272);
            fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::L2CValue(aLStack272,0xdfbf78d6f);
            lib::L2CValue::L2CValue((L2CValue *)auStack304,0x132a183e5b);
            uVar8 = lib::L2CValue::as_integer(aLStack272);
            uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack304);
            fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
            lib::L2CValue::L2CValue(aLStack144,fVar21);
            lib::L2CValue::_L2CValue((L2CValue *)auStack304);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::L2CValue((L2CValue *)auStack304,0xdfbf78d6f);
            lib::L2CValue::L2CValue(aLStack320,0x1870b5a0b6);
            pLVar10 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack304);
            pLVar13 = (L2CValue *)lib::L2CValue::as_integer(aLStack320);
            fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (*ppBVar20,(ulong)pLVar10,(ulong)pLVar13);
            lib::L2CValue::L2CValue(aLStack272,fVar21);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue((L2CValue *)auStack304);
            lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
            lib::L2CAgent::math_min((L2CAgent *)auStack384,(L2CValue *)auStack128,pLVar13);
            lib::L2CAgent::math_max((L2CAgent *)auStack352,(L2CValue *)local_3d0,pLVar13);
            lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),(L2CValue *)local_3d0);
            lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
            lib::L2CValue::operator_(aLStack320,aLStack400);
            lib::L2CValue::_L2CValue(aLStack400);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
            lib::L2CValue::_L2CValue((L2CValue *)auStack352);
            lib::L2CValue::_L2CValue((L2CValue *)auStack384);
            lib::L2CValue::operator_(aLStack272,aLStack144);
            lib::L2CValue::operator_((L2CValue *)auStack352,(L2CValue *)auStack304);
            lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),aLStack144);
            fVar21 = (float)lib::L2CValue::as_number(aLStack320);
            app::lua_bind::AttackModule__set_power_mul_status_impl(*ppBVar20,fVar21);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
            lib::L2CValue::_L2CValue((L2CValue *)auStack352);
            lib::L2CValue::_L2CValue((L2CValue *)auStack304);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue((L2CValue *)auStack128);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
            bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
            app::lua_bind::AttackModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
          }
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,false);
          bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
          app::lua_bind::SearchModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
          bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
          app::lua_bind::SearchModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
        app::lua_bind::AttackModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,false);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
        app::lua_bind::SearchModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
      }
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack128,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_VACANT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      uVar6 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar20,iVar4);
      pLVar10 = (L2CValue *)(ulong)(uVar6 & 1);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,SUB41(uVar6 & 1,0));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_VACANT);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar20,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
        pLVar10 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)local_3d0);
        app::lua_bind::WorkModule__set_customize_no_impl(*ppBVar20,(int)pLVar10,0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      }
      lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
      lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar10);
      lib::L2CValue::operator_((L2CValue *)auStack128,aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,0xdfbf78d6f);
      lib::L2CValue::L2CValue(aLStack320,0x194d4b30d3);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack304);
      uVar9 = lib::L2CValue::as_integer(aLStack320);
      fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack272,fVar21);
      uVar8 = lib::L2CValue::operator__((L2CValue *)local_3d0,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,false);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
        app::lua_bind::AttackModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::L2CValue((L2CValue *)auStack128,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack144,0x132a183e5b);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack128);
        uVar9 = lib::L2CValue::as_integer(aLStack144);
        fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,fVar21);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)auStack128);
        lib::L2CValue::L2CValue(aLStack144,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack272,0x14acd56f11);
        uVar8 = lib::L2CValue::as_integer(aLStack144);
        uVar9 = lib::L2CValue::as_integer(aLStack272);
        fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
        lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack272,0xdfbf78d6f);
        lib::L2CValue::L2CValue((L2CValue *)auStack304,0x132a183e5b);
        uVar8 = lib::L2CValue::as_integer(aLStack272);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack304);
        fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
        lib::L2CValue::L2CValue(aLStack144,fVar21);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::L2CValue((L2CValue *)auStack304,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack320,0x1870b5a0b6);
        pLVar10 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack304);
        pLVar13 = (L2CValue *)lib::L2CValue::as_integer(aLStack320);
        fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (*ppBVar20,(ulong)pLVar10,(ulong)pLVar13);
        lib::L2CValue::L2CValue(aLStack272,fVar21);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
        lib::L2CAgent::math_min((L2CAgent *)auStack384,(L2CValue *)auStack128,pLVar13);
        lib::L2CAgent::math_max((L2CAgent *)auStack352,(L2CValue *)local_3d0,pLVar13);
        lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),(L2CValue *)local_3d0);
        lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
        lib::L2CValue::operator_(aLStack320,aLStack400);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
        lib::L2CValue::_L2CValue((L2CValue *)auStack384);
        lib::L2CValue::operator_(aLStack272,aLStack144);
        lib::L2CValue::operator_((L2CValue *)auStack352,(L2CValue *)auStack304);
        lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),aLStack144);
        fVar21 = (float)lib::L2CValue::as_number(aLStack320);
        app::lua_bind::AttackModule__set_power_mul_status_impl(*ppBVar20,fVar21);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
        app::lua_bind::AttackModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
      }
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
      app::lua_bind::SearchModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_VACANT);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar20,iVar4);
    pLVar10 = (L2CValue *)(ulong)(uVar6 & 1);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,SUB41(uVar6 & 1,0));
    lib::L2CValue::operator_((L2CValue *)auStack128);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_VACANT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar20,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,1);
      pLVar10 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)local_3d0);
      app::lua_bind::WorkModule__set_customize_no_impl(*ppBVar20,(int)pLVar10,0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    }
    lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
    lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar10);
    lib::L2CValue::operator_((L2CValue *)auStack128,aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)auStack304,0xdfbf78d6f);
    lib::L2CValue::L2CValue(aLStack320,0x194d4b30d3);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack304);
    uVar9 = lib::L2CValue::as_integer(aLStack320);
    fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack272,fVar21);
    uVar8 = lib::L2CValue::operator__((L2CValue *)local_3d0,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)auStack304);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,false);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
      app::lua_bind::AttackModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0xdfbf78d6f);
      lib::L2CValue::L2CValue(aLStack144,0x132a183e5b);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      uVar9 = lib::L2CValue::as_integer(aLStack144);
      fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,fVar21);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::L2CValue(aLStack144,0xdfbf78d6f);
      lib::L2CValue::L2CValue(aLStack272,0x14acd56f11);
      uVar8 = lib::L2CValue::as_integer(aLStack144);
      uVar9 = lib::L2CValue::as_integer(aLStack272);
      fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack272,0xdfbf78d6f);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,0x132a183e5b);
      pLVar10 = (L2CValue *)lib::L2CValue::as_integer(aLStack272);
      pLVar13 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack304);
      fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (*ppBVar20,(ulong)pLVar10,(ulong)pLVar13);
      lib::L2CValue::L2CValue(aLStack144,fVar21);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,1.0);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
      lib::L2CAgent::math_min((L2CAgent *)auStack384,(L2CValue *)auStack128,pLVar13);
      lib::L2CAgent::math_max((L2CAgent *)auStack352,(L2CValue *)local_3d0,pLVar13);
      lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),(L2CValue *)local_3d0);
      lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
      lib::L2CValue::operator_(aLStack320,aLStack400);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      lib::L2CValue::operator_(aLStack272,aLStack144);
      lib::L2CValue::operator_((L2CValue *)auStack352,(L2CValue *)auStack304);
      lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),aLStack144);
      fVar21 = (float)lib::L2CValue::as_number(aLStack320);
      app::lua_bind::AttackModule__set_power_mul_status_impl(*ppBVar20,fVar21);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
      app::lua_bind::AttackModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
    }
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)local_3d0);
    app::lua_bind::SearchModule__sleep_impl(*ppBVar20,(bool)(bVar1 & 1));
  }
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  app::WeaponPickelTrolleyLinkEventRemoveIfDistance::new_l2c_table();
  fVar21 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar20);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)local_3d0,0x6a3da959a);
  lib::L2CValue::operator_(pLVar10,(L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  fVar21 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar20);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)local_3d0,0x6bac1a4db);
  lib::L2CValue::operator_(pLVar10,(L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::L2CValue(aLStack272,0xdfbf78d6f);
  lib::L2CValue::L2CValue((L2CValue *)auStack304,0x18b4fe51a9);
  uVar8 = lib::L2CValue::as_integer(aLStack272);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack304);
  fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack144,fVar21);
  fVar21 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar20);
  lib::L2CValue::L2CValue(aLStack320,fVar21);
  lib::L2CValue::operator_(aLStack144,aLStack320);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)local_3d0,0x9b37582c4);
  lib::L2CValue::operator_(pLVar10,(L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)auStack304);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,_WEAPON_PICKEL_RAIL_LINK_NO_TROLLEY);
  FUN_7100067e30(aLStack480,this,auStack128,local_3d0);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  FUN_71000a53a0(local_3d0,this);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_GENERATE_RAIL_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack128,false);
      lib::L2CValue::L2CValue(aLStack144,false);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      if ((uVar8 & 1) != 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,SITUATION_KIND_AIR);
        uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack272,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_INIT_POS);
          iVar4 = lib::L2CValue::as_integer(aLStack272);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar20,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue(aLStack272);
          if ((bVar2 & 1U) == 0) goto LAB_71000aa688;
        }
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
        lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
        lib::L2CValue::operator_(aLStack144,(L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      }
LAB_71000aa688:
      lib::L2CValue::operator_((L2CValue *)auStack128);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      if ((bVar2 & 1U) != 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack304,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack304);
          iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
          lib::L2CValue::L2CValue(aLStack272,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
          uVar8 = lib::L2CValue::operator__(aLStack272,(L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue((L2CValue *)auStack304);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack496,aLStack160);
            FUN_71000b3fa0(aLStack272,this,aLStack496);
            lib::L2CValue::_L2CValue(aLStack496);
            lib::L2CValue::L2CValue(aLStack512,aLStack272);
            FUN_71000b4060(auStack304,this,aLStack512);
            lib::L2CValue::_L2CValue(aLStack512);
            uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack304);
            pvVar14 = (void *)app::WeaponSpecializer_PickelTrolley::get_line_on_battle_object(uVar6)
            ;
            if (pvVar14 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack320,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue(aLStack320,pvVar14);
            }
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,_GROUND_TOUCH_ID_DOWN);
            GVar7 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
            pvVar14 = (void *)app::lua_bind::GroundModule__get_touch_line_raw_impl(*ppBVar20,GVar7);
            if (pvVar14 == (void *)0x0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)(auStack352 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),pvVar14);
            }
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
            uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),aLStack320);
            if ((uVar8 & 1) == 0) {
              uVar8 = lib::L2CValue::operator__
                                ((L2CValue *)(auStack352 + 0x10),
                                 (L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
              if (((uVar8 & 1) == 0) &&
                 (uVar8 = lib::L2CValue::operator__
                                    (aLStack320,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST),
                 (uVar8 & 1) == 0)) {
                pGVar17 = (GroundCollisionLine *)
                          lib::L2CValue::as_pointer((L2CValue *)(auStack352 + 0x10));
                pGVar18 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack320);
                bVar1 = app::FighterUtil::is_neighbor_floor_line(pGVar17,pGVar18);
                lib::L2CValue::L2CValue((L2CValue *)auStack352,(bool)(bVar1 & 1));
                lib::L2CValue::operator_((L2CValue *)auStack352);
                bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
                lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                lib::L2CValue::_L2CValue((L2CValue *)auStack352);
                if ((bVar2 & 1U) == 0) goto LAB_71000aac3c;
                lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
                lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
              }
              else {
                lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
                lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
              }
              lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
            }
LAB_71000aac3c:
            lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue((L2CValue *)auStack304);
            lib::L2CValue::_L2CValue(aLStack272);
          }
        }
      }
      lib::L2CValue::operator_((L2CValue *)auStack128);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      if ((bVar2 & 1U) != 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack304,
                     _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_RAIL_OBJECT_ID_LEFT_END);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack304);
          iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
          lib::L2CValue::L2CValue(aLStack272,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x50000000);
          uVar8 = lib::L2CValue::operator__(aLStack272,(L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::_L2CValue(aLStack272);
            puVar19 = auStack304;
          }
          else {
            lib::L2CValue::L2CValue
                      ((L2CValue *)(auStack352 + 0x10),
                       _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_RAIL_OBJECT_ID_RIGHT_END);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack352 + 0x10));
            iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
            lib::L2CValue::L2CValue(aLStack320,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x50000000);
            uVar8 = lib::L2CValue::operator__(aLStack320,(L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue((L2CValue *)auStack304);
            if ((uVar8 & 1) == 0) goto LAB_71000aadb8;
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,true);
            lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
            puVar19 = (undefined8 *)local_3d0;
          }
          lib::L2CValue::_L2CValue((L2CValue *)puVar19);
        }
      }
LAB_71000aadb8:
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack128);
      if ((bVar2 & 1U) == 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
          uVar8 = lib::L2CValue::operator__(aLStack160,(L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack272,CONTROL_PAD_BUTTON_SPECIAL);
            iVar4 = lib::L2CValue::as_integer(aLStack272);
            bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar20,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue(aLStack272);
            if ((bVar2 & 1U) == 0) goto LAB_71000abc20;
          }
          lib::L2CValue::L2CValue(aLStack912,aLStack160);
          FUN_71000b3fa0(aLStack272,this,aLStack912);
          lib::L2CValue::_L2CValue(aLStack912);
          lib::L2CValue::L2CValue(aLStack928,aLStack272);
          FUN_71000b4060(auStack304,this,aLStack928);
          lib::L2CValue::_L2CValue(aLStack928);
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x50000000);
          uVar8 = lib::L2CValue::operator__((L2CValue *)auStack304,(L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          if ((uVar8 & 1) == 0) {
            uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack304);
            bVar1 = app::sv_battle_object::is_active(uVar6);
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)local_3d0,
                         _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT
                        );
              iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
              iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
              lib::L2CValue::L2CValue(aLStack320,iVar4);
              lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
              lib::L2CValue::L2CValue
                        ((L2CValue *)auStack352,
                         _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
              iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
              lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),iVar4);
              lib::L2CValue::L2CValue
                        ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_POWERED_RAIL);
              uVar8 = lib::L2CValue::operator__
                                ((L2CValue *)(auStack352 + 0x10),(L2CValue *)local_3d0);
              lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
              lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
              lib::L2CValue::_L2CValue((L2CValue *)auStack352);
              if ((uVar8 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
                lib::L2CValue::L2CValue
                          ((L2CValue *)(auStack352 + 0x10),
                           _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT
                          );
                iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
                iVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack352 + 0x10));
                app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
                lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
                lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
                lib::L2CValue::operator_(aLStack320,(L2CValue *)local_3d0);
                lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
              }
              lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10));
              lib::L2CValue::L2CValue((L2CValue *)auStack352);
              lib::L2CValue::L2CValue((L2CValue *)auStack384);
              uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack304);
              pfVar15 = (float *)app::sv_battle_object::pos(uVar6);
              lib::L2CValue::L2CValue((L2CValue *)local_3d0,*pfVar15);
              pLVar10 = (L2CValue *)(local_3d0 + 0x10);
              lib::L2CValue::L2CValue(pLVar10,pfVar15[1]);
              lib::L2CValue::L2CValue(aLStack944,pfVar15[2]);
              lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),(L2CValue *)local_3d0);
              lib::L2CValue::operator_((L2CValue *)auStack352,pLVar10);
              lib::L2CValue::operator_((L2CValue *)auStack384,aLStack944);
              lib::L2CValue::_L2CValue(aLStack944);
              lib::L2CValue::_L2CValue(pLVar10);
              lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
              fVar21 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar20);
              lib::L2CValue::L2CValue(aLStack688,fVar21);
              pLVar10 = aLStack688;
              lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),pLVar10);
              lib::L2CAgent::math_abs((L2CAgent *)local_3d0,pLVar10);
              lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
              lib::L2CValue::_L2CValue(aLStack688);
              fVar21 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar20);
              lib::L2CValue::L2CValue(aLStack704,fVar21);
              pLVar10 = aLStack704;
              lib::L2CValue::operator_((L2CValue *)auStack352,pLVar10);
              lib::L2CAgent::math_abs((L2CAgent *)local_3d0,pLVar10);
              lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
              lib::L2CValue::_L2CValue(aLStack704);
              lib::L2CValue::operator_(aLStack400,aLStack400);
              lib::L2CValue::operator_(aLStack688,aLStack688);
              lib::L2CValue::operator_((L2CValue *)local_3d0,aLStack864);
              lib::L2CValue::_L2CValue(aLStack864);
              lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
              lib::L2CValue::L2CValue((L2CValue *)auStack880,0xdfbf78d6f);
              lib::L2CValue::L2CValue(aLStack896,0x155fa3c6a9);
              uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack880);
              uVar9 = lib::L2CValue::as_integer(aLStack896);
              fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9)
              ;
              lib::L2CValue::L2CValue((L2CValue *)local_3d0,fVar21);
              fVar21 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar20);
              lib::L2CValue::L2CValue(aLStack992,fVar21);
              lib::L2CValue::operator_((L2CValue *)local_3d0,aLStack992);
              lib::L2CValue::_L2CValue(aLStack992);
              lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
              lib::L2CValue::_L2CValue(aLStack896);
              lib::L2CValue::_L2CValue((L2CValue *)auStack880);
              lib::L2CValue::operator_(aLStack864,aLStack864);
              uVar8 = lib::L2CValue::operator_(aLStack704,(L2CValue *)auStack880);
              if ((uVar8 & 1) == 0) {
                lib::L2CValue::_L2CValue((L2CValue *)auStack880);
LAB_71000ac974:
                lib::L2CValue::L2CValue((L2CValue *)auStack880,CONTROL_PAD_BUTTON_SPECIAL);
                iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack880);
                bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar20,iVar4);
                lib::L2CValue::L2CValue((L2CValue *)local_3d0,(bool)(bVar1 & 1));
                bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
                lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                lib::L2CValue::_L2CValue((L2CValue *)auStack880);
                if ((bVar2 & 1U) != 0) {
                  lib::L2CValue::L2CValue
                            (aLStack896,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND);
                  iVar4 = lib::L2CValue::as_integer(aLStack896);
                  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
                  lib::L2CValue::L2CValue((L2CValue *)auStack880,iVar4);
                  lib::L2CValue::L2CValue
                            ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_POWERED_RAIL);
                  uVar8 = lib::L2CValue::operator__((L2CValue *)auStack880,(L2CValue *)local_3d0);
                  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                  lib::L2CValue::_L2CValue((L2CValue *)auStack880);
                  lib::L2CValue::_L2CValue(aLStack896);
                  if ((uVar8 & 1) == 0) {
                    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack304);
                    pvVar14 = (void *)app::sv_battle_object::module_accessor(uVar6);
                    if (pvVar14 == (void *)0x0) {
                      lib::L2CValue::L2CValue
                                ((L2CValue *)local_3d0,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                    }
                    else {
                      lib::L2CValue::L2CValue((L2CValue *)local_3d0,pvVar14);
                    }
                    uVar8 = lib::L2CValue::operator__
                                      ((L2CValue *)local_3d0,
                                       (L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                    if ((uVar8 & 1) == 0) {
                      lib::L2CValue::L2CValue
                                (aLStack992,_WEAPON_PICKEL_RAIL_INSTANCE_WORK_ID_FLAG_IS_POWERED);
                      iVar4 = lib::L2CValue::as_integer(aLStack992);
                      pBVar16 = (BattleObjectModuleAccessor *)
                                lib::L2CValue::as_pointer((L2CValue *)local_3d0);
                      uVar6 = app::lua_bind::WorkModule__is_flag_impl(pBVar16,iVar4);
                      pLVar10 = (L2CValue *)(ulong)(uVar6 & 1);
                      lib::L2CValue::L2CValue(aLStack896,SUB41(uVar6 & 1,0));
                      lib::L2CValue::operator_(aLStack896);
                      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack880);
                      lib::L2CValue::_L2CValue((L2CValue *)auStack880);
                      lib::L2CValue::_L2CValue(aLStack896);
                      lib::L2CValue::_L2CValue(aLStack992);
                      if ((bVar2 & 1U) != 0) {
                        lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
                        lib::L2CValue::L2CValue(aLStack992,0xdfbf78d6f);
                        lib::L2CValue::L2CValue(aLStack1008,0x27c11d6af0);
                        uVar8 = lib::L2CValue::as_integer(aLStack992);
                        uVar9 = lib::L2CValue::as_integer(aLStack1008);
                        fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                                  (*ppBVar20,uVar8,uVar9);
                        lib::L2CValue::L2CValue(aLStack896,fVar21);
                        uVar8 = lib::L2CValue::operator__((L2CValue *)auStack880,aLStack896);
                        lib::L2CValue::_L2CValue(aLStack896);
                        lib::L2CValue::_L2CValue(aLStack1008);
                        lib::L2CValue::_L2CValue(aLStack992);
                        lib::L2CValue::_L2CValue((L2CValue *)auStack880);
                        if ((uVar8 & 1) != 0) {
                          lib::L2CValue::L2CValue((L2CValue *)auStack880,1);
                          lib::L2CValue::L2CValue
                                    (aLStack896,
                                     _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT
                                    );
                          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack880);
                          iVar5 = lib::L2CValue::as_integer(aLStack896);
                          app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
                          lib::L2CValue::_L2CValue(aLStack896);
                          lib::L2CValue::_L2CValue((L2CValue *)auStack880);
                          lib::L2CValue::L2CValue(aLStack1392,false);
                          lib::L2CValue::L2CValue(aLStack1408,false);
                          FUN_71000b5630(auStack880,this,aLStack1392,aLStack1408);
                          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack880);
                          lib::L2CValue::_L2CValue((L2CValue *)auStack880);
                          lib::L2CValue::_L2CValue(aLStack1408);
                          lib::L2CValue::_L2CValue(aLStack1392);
                          if ((bVar2 & 1U) != 0) {
                            pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
                            pWVar11 = (Weapon *)lib::L2CValue::as_pointer(pLVar10);
                            bVar1 = app::WeaponSpecializer_PickelTrolley::
                                    replace_most_nearest_rail_on_ground(pWVar11);
                            lib::L2CValue::L2CValue((L2CValue *)auStack880,(bool)(bVar1 & 1));
                            bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack880);
                            lib::L2CValue::_L2CValue((L2CValue *)auStack880);
                            if ((bVar2 & 1U) != 0) {
                              lib::L2CValue::L2CValue(aLStack1424,false);
                              FUN_71000b5a70(this,aLStack1424);
                              lib::L2CValue::_L2CValue(aLStack1424);
                            }
                          }
                        }
                      }
                    }
                    puVar19 = (undefined8 *)local_3d0;
                    goto LAB_71000ad160;
                  }
                }
              }
              else {
                lib::L2CValue::L2CValue((L2CValue *)local_3d0,0.0);
                uVar8 = lib::L2CValue::operator__(aLStack160,(L2CValue *)local_3d0);
                lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                lib::L2CValue::_L2CValue((L2CValue *)auStack880);
                if ((uVar8 & 1) != 0) goto LAB_71000ac974;
                lib::L2CValue::L2CValue((L2CValue *)local_3d0,0xdfbf78d6f);
                lib::L2CValue::L2CValue(aLStack896,0xea74d9ce5);
                uVar8 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
                uVar9 = lib::L2CValue::as_integer(aLStack896);
                iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar20,uVar8,uVar9);
                lib::L2CValue::L2CValue((L2CValue *)auStack880,iVar4);
                lib::L2CValue::_L2CValue(aLStack896);
                lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                lib::L2CValue::L2CValue(aLStack896,1);
                lib::L2CValue::L2CValue((L2CValue *)local_3d0,0);
                uVar8 = lib::L2CValue::operator_((L2CValue *)local_3d0,aLStack320);
                lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                if ((uVar8 & 1) != 0) {
                  lib::L2CValue::L2CValue((L2CValue *)local_3d0,2);
                  lib::L2CValue::operator_(aLStack896,(L2CValue *)local_3d0);
                  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                }
                lib::L2CValue::L2CValue
                          ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_GENERATE_ARTICLE_RAIL);
                iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
                iVar4 = app::lua_bind::ArticleModule__get_num_impl(*ppBVar20,iVar4);
                lib::L2CValue::L2CValue(aLStack992,iVar4);
                lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                lib::L2CValue::L2CValue(aLStack1056,0xdfbf78d6f);
                lib::L2CValue::L2CValue(aLStack1072,0xe70e9cfef);
                uVar8 = lib::L2CValue::as_integer(aLStack1056);
                uVar9 = lib::L2CValue::as_integer(aLStack1072);
                iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar20,uVar8,uVar9);
                lib::L2CValue::L2CValue(aLStack1040,iVar4);
                lib::L2CValue::L2CValue((L2CValue *)local_3d0,1);
                lib::L2CValue::operator_(aLStack1040,(L2CValue *)local_3d0);
                lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                lib::L2CValue::operator_(aLStack1024,(L2CValue *)auStack880);
                uVar8 = lib::L2CValue::operator__(aLStack1008,aLStack992);
                lib::L2CValue::_L2CValue(aLStack1008);
                lib::L2CValue::_L2CValue(aLStack1024);
                lib::L2CValue::_L2CValue(aLStack1040);
                lib::L2CValue::_L2CValue(aLStack1072);
                lib::L2CValue::_L2CValue(aLStack1056);
                if ((uVar8 & 1) != 0) {
                  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
                  lib::L2CValue::L2CValue(aLStack1056,0xdfbf78d6f);
                  lib::L2CValue::L2CValue(aLStack1072,0xe70e9cfef);
                  uVar8 = lib::L2CValue::as_integer(aLStack1056);
                  uVar9 = lib::L2CValue::as_integer(aLStack1072);
                  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar20,uVar8,uVar9);
                  lib::L2CValue::L2CValue(aLStack1040,iVar4);
                  lib::L2CValue::operator_(aLStack1040,aLStack896);
                  lib::L2CValue::operator_(aLStack1024,(L2CValue *)auStack880);
                  lib::L2CValue::operator_(aLStack992,aLStack1008);
                  pWVar11 = (Weapon *)lib::L2CValue::as_pointer(pLVar10);
                  iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
                  app::WeaponSpecializer_PickelTrolley::remove_most_farest_rail(pWVar11,iVar4);
                  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                  lib::L2CValue::_L2CValue(aLStack1008);
                  lib::L2CValue::_L2CValue(aLStack1024);
                  lib::L2CValue::_L2CValue(aLStack1040);
                  lib::L2CValue::_L2CValue(aLStack1072);
                  lib::L2CValue::_L2CValue(aLStack1056);
                }
                uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack304);
                pvVar14 = (void *)app::WeaponSpecializer_PickelTrolley::get_line_on_battle_object
                                            (uVar6);
                if (pvVar14 == (void *)0x0) {
                  lib::L2CValue::L2CValue(aLStack1008,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack1008,pvVar14);
                }
                uVar8 = lib::L2CValue::operator__
                                  (aLStack1008,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                if ((uVar8 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack1024,_GROUND_TOUCH_ID_DOWN);
                  GVar7 = lib::L2CValue::as_integer(aLStack1024);
                  pvVar14 = (void *)app::lua_bind::GroundModule__get_touch_line_raw_impl
                                              (*ppBVar20,GVar7);
                  if (pvVar14 == (void *)0x0) {
                    lib::L2CValue::L2CValue
                              ((L2CValue *)local_3d0,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                  }
                  else {
                    lib::L2CValue::L2CValue((L2CValue *)local_3d0,pvVar14);
                  }
                  lib::L2CValue::_L2CValue(aLStack1024);
                  uVar8 = lib::L2CValue::operator__
                                    ((L2CValue *)local_3d0,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST)
                  ;
                  if ((uVar8 & 1) == 0) {
                    pGVar17 = (GroundCollisionLine *)
                              lib::L2CValue::as_pointer((L2CValue *)local_3d0);
                    pGVar18 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack1008);
                    bVar1 = app::FighterUtil::is_neighbor_floor_line(pGVar17,pGVar18);
                    lib::L2CValue::L2CValue(aLStack1040,(bool)(bVar1 & 1));
                    lib::L2CValue::operator_(aLStack1040);
                    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack1024);
                    lib::L2CValue::_L2CValue(aLStack1024);
                    lib::L2CValue::_L2CValue(aLStack1040);
                    if ((bVar2 & 1U) != 0) {
                      lib::L2CValue::operator_(aLStack1008,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST)
                      ;
                    }
                  }
                  else {
                    lib::L2CValue::operator_(aLStack1008,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                  }
                  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                }
                lib::L2CValue::L2CValue(aLStack1024,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
                uVar8 = lib::L2CValue::operator__
                                  (aLStack1008,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                if ((uVar8 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack1088,aLStack1008);
                  lib::L2CValue::L2CValue(aLStack1104,(L2CValue *)(auStack352 + 0x10));
                  lib::L2CValue::L2CValue(aLStack1120,(L2CValue *)auStack352);
                  lib::L2CValue::L2CValue(aLStack1136,aLStack272);
                  lib::L2CValue::L2CValue(aLStack1152,false);
                  lib::L2CValue::L2CValue(aLStack1168,true);
                  lib::L2CValue::L2CValue(aLStack1184,false);
                  lib::L2CValue::L2CValue(aLStack1200,false);
                  FUN_71000b4150(local_3d0,this,aLStack1088,aLStack1104,aLStack1120,aLStack1136,
                                 aLStack1152,aLStack1168,aLStack1184,aLStack1200);
                  lib::L2CValue::operator_(aLStack1024,(L2CValue *)local_3d0);
                  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                  lib::L2CValue::_L2CValue(aLStack1200);
                  lib::L2CValue::_L2CValue(aLStack1184);
                  lib::L2CValue::_L2CValue(aLStack1168);
                  lib::L2CValue::_L2CValue(aLStack1152);
                  lib::L2CValue::_L2CValue(aLStack1136);
                  lib::L2CValue::_L2CValue(aLStack1120);
                  lib::L2CValue::_L2CValue(aLStack1104);
                  lib::L2CValue::_L2CValue(aLStack1088);
                }
                lib::L2CValue::L2CValue
                          ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_POWERED_RAIL);
                uVar8 = lib::L2CValue::operator__(aLStack1024,(L2CValue *)local_3d0);
                lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                if ((uVar8 & 1) != 0) {
                  lib::L2CValue::L2CValue((L2CValue *)local_3d0,1);
                  lib::L2CValue::L2CValue
                            (aLStack1040,
                             _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT
                            );
                  iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
                  iVar5 = lib::L2CValue::as_integer(aLStack1040);
                  app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
                  lib::L2CValue::_L2CValue(aLStack1040);
                  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                  lib::L2CValue::L2CValue(aLStack1216,aLStack272);
                  FUN_71000b4060(local_3d0,this,aLStack1216);
                  lib::L2CValue::_L2CValue(aLStack1216);
                  uVar6 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
                  pvVar14 = (void *)app::WeaponSpecializer_PickelTrolley::get_line_on_battle_object
                                              (uVar6);
                  if (pvVar14 == (void *)0x0) {
                    lib::L2CValue::L2CValue(aLStack1040,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack1040,pvVar14);
                  }
                  lib::L2CValue::L2CValue
                            (aLStack1072,
                             _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_X);
                  iVar4 = lib::L2CValue::as_integer(aLStack1072);
                  fVar21 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar20,iVar4);
                  lib::L2CValue::L2CValue(aLStack1056,fVar21);
                  lib::L2CValue::_L2CValue(aLStack1072);
                  lib::L2CValue::L2CValue
                            (aLStack1232,
                             _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_Y);
                  iVar4 = lib::L2CValue::as_integer(aLStack1232);
                  fVar21 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar20,iVar4);
                  lib::L2CValue::L2CValue(aLStack1072,fVar21);
                  lib::L2CValue::_L2CValue(aLStack1232);
                  uVar8 = lib::L2CValue::operator__
                                    (aLStack1040,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                  if ((uVar8 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack1264,aLStack1040);
                    lib::L2CValue::L2CValue(aLStack1280,aLStack1056);
                    lib::L2CValue::L2CValue(aLStack1296,aLStack1072);
                    lib::L2CValue::L2CValue(aLStack1312,aLStack272);
                    lib::L2CValue::L2CValue(aLStack1328,false);
                    lib::L2CValue::L2CValue(aLStack1344,false);
                    lib::L2CValue::L2CValue(aLStack1360,true);
                    lib::L2CValue::L2CValue(aLStack1376,false);
                    FUN_71000b4150(aLStack1248,this,aLStack1264,aLStack1280,aLStack1296,aLStack1312,
                                   aLStack1328,aLStack1344,aLStack1360,aLStack1376);
                    lib::L2CValue::_L2CValue(aLStack1248);
                    lib::L2CValue::_L2CValue(aLStack1376);
                    lib::L2CValue::_L2CValue(aLStack1360);
                    lib::L2CValue::_L2CValue(aLStack1344);
                    lib::L2CValue::_L2CValue(aLStack1328);
                    lib::L2CValue::_L2CValue(aLStack1312);
                    lib::L2CValue::_L2CValue(aLStack1296);
                    lib::L2CValue::_L2CValue(aLStack1280);
                    lib::L2CValue::_L2CValue(aLStack1264);
                  }
                  lib::L2CValue::_L2CValue(aLStack1072);
                  lib::L2CValue::_L2CValue(aLStack1056);
                  lib::L2CValue::_L2CValue(aLStack1040);
                  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
                }
                lib::L2CValue::_L2CValue(aLStack1024);
                lib::L2CValue::_L2CValue(aLStack1008);
                lib::L2CValue::_L2CValue(aLStack992);
                lib::L2CValue::_L2CValue(aLStack896);
                puVar19 = auStack880;
LAB_71000ad160:
                lib::L2CValue::_L2CValue((L2CValue *)puVar19);
              }
              lib::L2CValue::_L2CValue(aLStack864);
              lib::L2CValue::_L2CValue(aLStack704);
              lib::L2CValue::_L2CValue(aLStack688);
              lib::L2CValue::_L2CValue(aLStack400);
              lib::L2CValue::_L2CValue((L2CValue *)auStack384);
              pLVar10 = (L2CValue *)auStack352;
              goto LAB_71000abbfc;
            }
          }
          goto LAB_71000abc10;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x50000000);
        lib::L2CValue::L2CValue
                  (aLStack272,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_RAIL_OBJECT_ID_LEFT_END);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
        iVar5 = lib::L2CValue::as_integer(aLStack272);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x50000000);
        lib::L2CValue::L2CValue
                  (aLStack272,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_RAIL_OBJECT_ID_RIGHT_END);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
        iVar5 = lib::L2CValue::as_integer(aLStack272);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::L2CValue(aLStack272);
        lib::L2CValue::L2CValue((L2CValue *)auStack304);
        uVar24 = app::lua_bind::GroundModule__get_down_pos_impl(*ppBVar20);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,(float)uVar24);
        pLVar10 = (L2CValue *)(local_3d0 + 0x10);
        lib::L2CValue::L2CValue(pLVar10,(float)((ulong)uVar24 >> 0x20));
        lib::L2CValue::operator_(aLStack272,(L2CValue *)local_3d0);
        lib::L2CValue::operator_((L2CValue *)auStack304,pLVar10);
        lib::L2CValue::_L2CValue(pLVar10);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::L2CValue((L2CValue *)local_3d0,_GROUND_TOUCH_ID_DOWN);
        GVar7 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
        pvVar14 = (void *)app::lua_bind::GroundModule__get_touch_line_raw_impl(*ppBVar20,GVar7);
        if (pvVar14 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack320,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack320,pvVar14);
        }
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        lib::L2CValue::L2CValue(aLStack528,aLStack320);
        lib::L2CValue::L2CValue(aLStack544,aLStack272);
        lib::L2CValue::L2CValue(aLStack560,(L2CValue *)auStack304);
        fVar21 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar20);
        lib::L2CValue::L2CValue(aLStack576,fVar21);
        lib::L2CValue::L2CValue(aLStack592,true);
        lib::L2CValue::L2CValue(aLStack608,true);
        lib::L2CValue::L2CValue(aLStack624,false);
        lib::L2CValue::L2CValue(aLStack640,false);
        FUN_71000b4150(auStack352 + 0x10,this,aLStack528,aLStack544,aLStack560,aLStack576,aLStack592
                       ,aLStack608,aLStack624,aLStack640);
        lib::L2CValue::_L2CValue(aLStack640);
        lib::L2CValue::_L2CValue(aLStack624);
        lib::L2CValue::_L2CValue(aLStack608);
        lib::L2CValue::_L2CValue(aLStack592);
        lib::L2CValue::_L2CValue(aLStack576);
        lib::L2CValue::_L2CValue(aLStack560);
        lib::L2CValue::_L2CValue(aLStack544);
        lib::L2CValue::_L2CValue(aLStack528);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_POWERED_RAIL);
        uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),(L2CValue *)local_3d0);
        lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,1);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack352,
                     _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_BUTTON_AVAILABLE_COUNT
                    );
          iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack352);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
          lib::L2CValue::_L2CValue((L2CValue *)auStack352);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          lib::L2CValue::L2CValue(aLStack656,aLStack160);
          FUN_71000b3fa0(local_3d0,this,aLStack656);
          lib::L2CValue::_L2CValue(aLStack656);
          lib::L2CValue::L2CValue(aLStack672,(L2CValue *)local_3d0);
          FUN_71000b4060(auStack352,this,aLStack672);
          lib::L2CValue::_L2CValue(aLStack672);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack352);
          pvVar14 = (void *)app::WeaponSpecializer_PickelTrolley::get_line_on_battle_object(uVar6);
          if (pvVar14 == (void *)0x0) {
            lib::L2CValue::L2CValue((L2CValue *)auStack384,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST)
            ;
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)auStack384,pvVar14);
          }
          lib::L2CValue::L2CValue
                    (aLStack688,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_X);
          iVar4 = lib::L2CValue::as_integer(aLStack688);
          fVar21 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar20,iVar4);
          lib::L2CValue::L2CValue(aLStack400,fVar21);
          lib::L2CValue::_L2CValue(aLStack688);
          lib::L2CValue::L2CValue
                    (aLStack704,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_GENERATE_RAIL_POS_Y);
          iVar4 = lib::L2CValue::as_integer(aLStack704);
          fVar21 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar20,iVar4);
          lib::L2CValue::L2CValue(aLStack688,fVar21);
          lib::L2CValue::_L2CValue(aLStack704);
          uVar8 = lib::L2CValue::operator__
                            ((L2CValue *)auStack384,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack736,(L2CValue *)auStack384);
            lib::L2CValue::L2CValue(aLStack752,aLStack400);
            lib::L2CValue::L2CValue(aLStack768,aLStack688);
            fVar21 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar20);
            lib::L2CValue::L2CValue(aLStack784,fVar21);
            lib::L2CValue::L2CValue(aLStack800,false);
            lib::L2CValue::L2CValue(aLStack816,false);
            lib::L2CValue::L2CValue(aLStack832,true);
            lib::L2CValue::L2CValue(aLStack848,false);
            FUN_71000b4150(aLStack720,this,aLStack736,aLStack752,aLStack768,aLStack784,aLStack800,
                           aLStack816,aLStack832,aLStack848);
            lib::L2CValue::_L2CValue(aLStack720);
            lib::L2CValue::_L2CValue(aLStack848);
            lib::L2CValue::_L2CValue(aLStack832);
            lib::L2CValue::_L2CValue(aLStack816);
            lib::L2CValue::_L2CValue(aLStack800);
            lib::L2CValue::_L2CValue(aLStack784);
            lib::L2CValue::_L2CValue(aLStack768);
            lib::L2CValue::_L2CValue(aLStack752);
            lib::L2CValue::_L2CValue(aLStack736);
          }
          lib::L2CValue::_L2CValue(aLStack688);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::_L2CValue((L2CValue *)auStack352);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
        }
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack384,
                     _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_RAIL_OBJECT_ID_LEFT_END);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack384);
          iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)auStack352,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x50000000);
          uVar8 = lib::L2CValue::operator__((L2CValue *)auStack352,(L2CValue *)local_3d0);
          lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::_L2CValue((L2CValue *)auStack352);
            lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack688,
                       _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_RAIL_OBJECT_ID_RIGHT_END);
            iVar4 = lib::L2CValue::as_integer(aLStack688);
            iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
            lib::L2CValue::L2CValue(aLStack400,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x50000000);
            uVar8 = lib::L2CValue::operator__(aLStack400,(L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
            lib::L2CValue::_L2CValue(aLStack400);
            lib::L2CValue::_L2CValue(aLStack688);
            lib::L2CValue::_L2CValue((L2CValue *)auStack352);
            lib::L2CValue::_L2CValue((L2CValue *)auStack384);
            if ((uVar8 & 1) != 0) goto LAB_71000abc00;
          }
          lib::L2CValue::L2CValue((L2CValue *)auStack352,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack352);
          fVar21 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
          lib::L2CValue::L2CValue((L2CValue *)local_3d0,fVar21);
          lib::L2CValue::_L2CValue((L2CValue *)auStack352);
          lib::L2CValue::L2CValue((L2CValue *)auStack352,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CValue::L2CValue(aLStack704,0xdfbf78d6f);
          lib::L2CValue::L2CValue(aLStack864,0x14c6fbc913);
          uVar8 = lib::L2CValue::as_integer(aLStack704);
          uVar9 = lib::L2CValue::as_integer(aLStack864);
          fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
          lib::L2CValue::L2CValue(aLStack688,fVar21);
          fVar21 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar20);
          lib::L2CValue::L2CValue((L2CValue *)auStack880,fVar21);
          lib::L2CValue::operator_(aLStack688,(L2CValue *)auStack880);
          lib::L2CValue::operator_((L2CValue *)local_3d0,aLStack400);
          lib::L2CValue::L2CValue(aLStack896,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack352);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack384);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack896);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack896);
          lib::L2CValue::_L2CValue((L2CValue *)auStack384);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue((L2CValue *)auStack880);
          lib::L2CValue::_L2CValue(aLStack688);
          lib::L2CValue::_L2CValue(aLStack864);
          lib::L2CValue::_L2CValue(aLStack704);
          lib::L2CValue::_L2CValue((L2CValue *)auStack352);
          pLVar10 = (L2CValue *)local_3d0;
LAB_71000abbfc:
          lib::L2CValue::_L2CValue(pLVar10);
        }
LAB_71000abc00:
        lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::_L2CValue(aLStack320);
LAB_71000abc10:
        lib::L2CValue::_L2CValue((L2CValue *)auStack304);
        lib::L2CValue::_L2CValue(aLStack272);
      }
LAB_71000abc20:
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,0xdfbf78d6f);
  lib::L2CValue::L2CValue(aLStack144,0x212fc5d161);
  pLVar10 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)local_3d0);
  uVar8 = lib::L2CValue::as_integer(aLStack144);
  fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,(ulong)pLVar10,uVar8);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar21);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
  uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,aLStack144);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack144);
LAB_71000abdac:
    lib::L2CValue::L2CValue(aLStack272,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DASH_EFFECT_ID);
    iVar4 = lib::L2CValue::as_integer(aLStack272);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue(aLStack144,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_EFFECT_HANDLE_NULL);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack144,0x16a9605f19);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      HVar12 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar20,iVar4,HVar12,-1);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,_EFFECT_HANDLE_NULL);
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DASH_EFFECT_ID)
      ;
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
LAB_71000abeac:
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    }
  }
  else {
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) goto LAB_71000abdac;
    lib::L2CValue::L2CValue(aLStack272,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DASH_EFFECT_ID);
    iVar4 = lib::L2CValue::as_integer(aLStack272);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue(aLStack144,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_EFFECT_HANDLE_NULL);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack144,0x18bda3e781);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      HVar12 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar20,iVar4,HVar12,-1);
      goto LAB_71000abeac;
    }
  }
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
  lib::L2CValue::L2CValue(aLStack144,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
  uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack272);
LAB_71000ac024:
    lib::L2CValue::L2CValue
              (aLStack272,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_OFF_RAIL_EFFECT_ID);
    iVar4 = lib::L2CValue::as_integer(aLStack272);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue(aLStack144,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_EFFECT_HANDLE_NULL);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack144,0x19e4eb573c);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      HVar12 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar20,iVar4,HVar12,-1);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,_EFFECT_HANDLE_NULL);
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_OFF_RAIL_EFFECT_ID);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
LAB_71000ac124:
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    }
  }
  else {
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar8 & 1) == 0) goto LAB_71000ac024;
    lib::L2CValue::L2CValue
              (aLStack272,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_OFF_RAIL_EFFECT_ID);
    iVar4 = lib::L2CValue::as_integer(aLStack272);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue(aLStack144,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_EFFECT_HANDLE_NULL);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack144,0x1b5b8bf2df);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      HVar12 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar20,iVar4,HVar12,-1);
      goto LAB_71000ac124;
    }
  }
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,0x7fb997a80);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
  lib::L2CValue::L2CValue(aLStack144,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,SITUATION_KIND_AIR);
  uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x1593eb6c76);
      lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
      goto LAB_71000ac310;
    }
  }
  FUN_71000a5130(local_3d0,this);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x159d30e444);
      lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x1574534171);
      lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x150439b5fe);
      lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x15e4ec5ce0);
      lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)local_3d0);
    }
  }
LAB_71000ac310:
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_SOUND_HANDLE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
  lib::L2CValue::L2CValue(aLStack144,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_SOUND_KIND);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  lVar23 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar20,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,lVar23);
  uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,-1);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    if ((uVar8 & 1) == 0) {
      app::lua_bind::SoundModule__stop_status_se_impl(*ppBVar20);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,-1);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,-1);
      lib::L2CValue::L2CValue
                (aLStack272,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_SOUND_HANDLE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      iVar5 = lib::L2CValue::as_integer(aLStack272);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    }
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0x7fb997a80);
    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack128,(L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    if ((uVar8 & 1) == 0) {
      HVar12 = lib::L2CValue::as_hash((L2CValue *)auStack128);
      iVar4 = app::lua_bind::SoundModule__play_status_se_impl(*ppBVar20,HVar12,false,false,false);
      lib::L2CValue::L2CValue((L2CValue *)local_3d0,iVar4);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)local_3d0);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_3d0,
                 _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_SOUND_HANDLE);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar20,iVar4,iVar5);
      lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_SOUND_KIND);
    lVar23 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar20,lVar23,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  }
  lib::L2CValue::L2CValue((L2CValue *)local_3d0,-1);
  uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)local_3d0);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0xdfbf78d6f);
    lib::L2CValue::L2CValue((L2CValue *)auStack304,0x1ee21d5788);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack304);
    fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack272,fVar21);
    lib::L2CValue::_L2CValue((L2CValue *)auStack304);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0xdfbf78d6f);
    lib::L2CValue::L2CValue(aLStack320,0x1ea2522ffe);
    pLVar10 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)local_3d0);
    uVar8 = lib::L2CValue::as_integer(aLStack320);
    fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,(ulong)pLVar10,uVar8);
    lib::L2CValue::L2CValue((L2CValue *)auStack304,fVar21);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar10);
    lib::L2CValue::L2CValue(aLStack1456,aLStack272);
    lib::L2CValue::L2CValue(aLStack1472,(L2CValue *)auStack304);
    lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack1472);
    lib::L2CValue::_L2CValue(aLStack1456);
    lib::L2CValue::_L2CValue(aLStack1440);
    lib::L2CValue::operator_(aLStack320,aLStack272);
    lib::L2CValue::operator_((L2CValue *)auStack304,aLStack272);
    lib::L2CValue::operator_((L2CValue *)local_3d0,(L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0xdfbf78d6f);
    lib::L2CValue::L2CValue((L2CValue *)auStack384,0x2032d0d2fe);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack384);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar20,uVar8,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,0xdfbf78d6f);
    lib::L2CValue::L2CValue(aLStack400,0xdea58074d);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
    pLVar10 = (L2CValue *)lib::L2CValue::as_integer(aLStack400);
    fVar21 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar20,uVar8,(ulong)pLVar10);
    lib::L2CValue::L2CValue((L2CValue *)auStack384,fVar21);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::L2CValue
              (aLStack688,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_SITUATION_AIR_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack688);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar20,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,iVar4);
    lib::L2CAgent::math_min((L2CAgent *)local_3d0,(L2CValue *)auStack352,pLVar10);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack688);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,1.0);
    lib::L2CValue::operator_((L2CValue *)local_3d0,(L2CValue *)auStack384);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::operator_(aLStack400,(L2CValue *)auStack352);
    lib::L2CValue::L2CValue((L2CValue *)local_3d0,1.0);
    lib::L2CValue::operator_((L2CValue *)local_3d0,aLStack896);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::operator_(aLStack864,(L2CValue *)auStack880);
    lib::L2CValue::operator_(aLStack704,(L2CValue *)auStack384);
    lib::L2CValue::_L2CValue(aLStack704);
    lib::L2CValue::_L2CValue((L2CValue *)auStack880);
    lib::L2CValue::_L2CValue(aLStack896);
    lib::L2CValue::_L2CValue(aLStack864);
    lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),aLStack688);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar21 = (float)lib::L2CValue::as_number((L2CValue *)local_3d0);
    app::lua_bind::SoundModule__set_se_vol_impl(*ppBVar20,iVar4,fVar21,0);
    lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
    lib::L2CValue::_L2CValue(aLStack688);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)auStack304);
    lib::L2CValue::_L2CValue(aLStack272);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_3d0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLAG_INIT_POS);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)local_3d0);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar20,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)local_3d0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

