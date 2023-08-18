
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSnakeNikitamissile::status::Fly_exec
          (L2CWeaponSnakeNikitamissile *this,L2CValue *return_value)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  WeaponSnakeNikitaMissileKineticEnergyNormal *pWVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  BattleObjectModuleAccessor *pBVar11;
  KineticEnergyNormal *pKVar12;
  KineticEnergyRotNormal *pKVar13;
  KineticEnergy *pKVar14;
  float *pfVar15;
  Hash40 HVar16;
  Hash40 HVar17;
  void ***pppvVar18;
  ulong *puVar19;
  L2CValue *pLVar20;
  BattleObjectModuleAccessor **ppBVar21;
  float fVar22;
  uint uVar23;
  long lVar24;
  undefined8 uVar25;
  int in_stack_fffffffffffffda4;
  undefined in_stack_fffffffffffffdac;
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  undefined auStack416 [32];
  L2CValue aLStack384 [16];
  undefined auStack368 [16];
  undefined auStack352 [32];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  ulong local_80;
  BattleObject *pBStack120;
  void **local_70;
  lua_State *plStack104;
  
  lib::L2CValue::L2CValue(aLStack192,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_INSTANCE_WORK_ID_FLAG_SWALLOWED);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  ppBVar21 = &this->moduleAccessor;
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_SNAKE_NIKITA_MISSILE_KINETIC_ENERGY_ID_NORMAL);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue(aLStack208,pvVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_SNAKE_NIKITA_MISSILE_KINETIC_ENERGY_ID_ROT_NORMAL);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue(aLStack224,pvVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pWVar7 = (WeaponSnakeNikitaMissileKineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack208);
    fVar22 = (float)app::lua_bind::WeaponSnakeNikitaMissileKineticEnergyNormal__rot_z_impl(pWVar7);
    lib::L2CValue::L2CValue(aLStack240,fVar22);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_FLOAT_TOPNB_ROTX);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue(aLStack256,fVar22);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              (aLStack144,_WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_INT_DAMAGE_ROT_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) {
      fVar22 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar21);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      pppvVar18 = &local_70;
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)pppvVar18);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
LAB_7100032628:
        fVar22 = (float)app::lua_bind::ControlModule__get_stick_angle_impl(*ppBVar21);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar22);
        lib::L2CAgent::math_deg((L2CAgent *)&local_70,(L2CValue *)pppvVar18);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        pWVar7 = (WeaponSnakeNikitaMissileKineticEnergyNormal *)
                 lib::L2CValue::as_pointer(aLStack208);
        fVar22 = (float)app::lua_bind::WeaponSnakeNikitaMissileKineticEnergyNormal__rot_z_impl
                                  (pWVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar22);
        lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
        pppvVar18 = &local_70;
        uVar8 = lib::L2CValue::operator__((L2CValue *)auStack288,(L2CValue *)pppvVar18);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar8 & 1) == 0) {
          lib::L2CAgent::math_deg
                    ((L2CAgent *)&FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_JUMP,
                     (L2CValue *)pppvVar18);
          lib::L2CValue::operator_((L2CValue *)&local_80);
          pppvVar18 = &local_70;
          uVar8 = lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)pppvVar18);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((uVar8 & 1) == 0) {
            lib::L2CAgent::math_deg
                      ((L2CAgent *)&FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_JUMP,
                       (L2CValue *)pppvVar18);
            uVar8 = lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)auStack288);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            if ((uVar8 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,2.0);
              pppvVar18 = &local_70;
              lib::L2CValue::operator_
                        ((L2CValue *)&FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_JUMP,
                         (L2CValue *)pppvVar18);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CAgent::math_deg((L2CAgent *)(auStack176 + 0x10),(L2CValue *)pppvVar18);
              lib::L2CValue::operator_((L2CValue *)auStack288,aLStack144);
              lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)&local_80);
              goto LAB_71000327b0;
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,2.0);
            pppvVar18 = &local_70;
            lib::L2CValue::operator_
                      ((L2CValue *)&FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_JUMP,
                       (L2CValue *)pppvVar18);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CAgent::math_deg((L2CAgent *)(auStack176 + 0x10),(L2CValue *)pppvVar18);
            lib::L2CValue::operator_((L2CValue *)auStack288,aLStack144);
            lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)&local_80);
LAB_71000327b0:
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLOAT_LIMIT_ANGLE);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLOAT_BRAKE_ROT_DIFF);
          pLVar10 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_70);
          fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,(int)pLVar10);
          lib::L2CValue::L2CValue(aLStack144,fVar22);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
          lib::L2CAgent::math_abs((L2CAgent *)auStack288,pLVar10);
          pppvVar18 = &local_70;
          uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)pppvVar18);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
            uVar8 = lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            bVar3 = (uVar8 & 1) == 0;
            if (bVar3) {
              lib::L2CValue::L2CValue(aLStack304,1.0);
            }
            else {
              lib::L2CValue::L2CValue(aLStack320,1.0);
              lib::L2CValue::operator_(aLStack320);
            }
            lib::L2CValue::operator_((L2CValue *)&local_80,aLStack304);
            pppvVar18 = (void ***)auStack176;
            lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),(L2CValue *)pppvVar18);
            lib::L2CValue::_L2CValue((L2CValue *)auStack176);
            lib::L2CValue::_L2CValue(aLStack304);
            if (!bVar3) {
              lib::L2CValue::_L2CValue(aLStack320);
            }
          }
          lib::L2CAgent::math_abs((L2CAgent *)auStack288,(L2CValue *)pppvVar18);
          uVar8 = lib::L2CValue::operator_((L2CValue *)&local_70,aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,2.0);
            lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),(L2CValue *)auStack176);
            lib::L2CValue::_L2CValue((L2CValue *)auStack176);
          }
          pWVar7 = (WeaponSnakeNikitaMissileKineticEnergyNormal *)
                   lib::L2CValue::as_pointer(aLStack208);
          fVar22 = (float)app::lua_bind::WeaponSnakeNikitaMissileKineticEnergyNormal__rot_z_impl
                                    (pWVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar22);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack176,
                     _WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLOAT_PREV_ROT);
          fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)auStack176);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          pWVar7 = (WeaponSnakeNikitaMissileKineticEnergyNormal *)
                   lib::L2CValue::as_pointer(aLStack208);
          fVar22 = (float)app::lua_bind::WeaponSnakeNikitaMissileKineticEnergyNormal__rot_z_impl
                                    (pWVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar22);
          pLVar10 = (L2CValue *)(auStack176 + 0x10);
          lib::L2CValue::operator_((L2CValue *)&local_70,pLVar10);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,2.0);
          pppvVar18 = &local_70;
          lib::L2CValue::operator_
                    ((L2CValue *)&FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_JUMP,
                     (L2CValue *)pppvVar18);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CAgent::math_deg((L2CAgent *)auStack352,(L2CValue *)pppvVar18);
          uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),aLStack304);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)auStack352);
          lib::L2CValue::_L2CValue(aLStack304);
          if ((uVar8 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_70,2.0);
            pppvVar18 = &local_70;
            lib::L2CValue::operator_
                      ((L2CValue *)&FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_JUMP,
                       (L2CValue *)pppvVar18);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CAgent::math_deg((L2CAgent *)auStack368,(L2CValue *)pppvVar18);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
            uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)auStack176);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            bVar3 = (uVar8 & 1) == 0;
            if (bVar3) {
              lib::L2CValue::L2CValue(aLStack384,1.0);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)(auStack416 + 0x10),1.0);
              lib::L2CValue::operator_((L2CValue *)(auStack416 + 0x10));
            }
            lib::L2CValue::operator_((L2CValue *)auStack352,aLStack384);
            lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)(auStack352 + 0x10));
            lib::L2CValue::operator_((L2CValue *)auStack176,aLStack304);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
            lib::L2CValue::_L2CValue(aLStack384);
            if (!bVar3) {
              lib::L2CValue::_L2CValue((L2CValue *)(auStack416 + 0x10));
            }
            lib::L2CValue::_L2CValue((L2CValue *)auStack352);
            lib::L2CValue::_L2CValue((L2CValue *)auStack368);
          }
          fVar22 = (float)lib::L2CValue::as_number((L2CValue *)auStack176);
          pWVar7 = (WeaponSnakeNikitaMissileKineticEnergyNormal *)
                   lib::L2CValue::as_pointer(aLStack208);
          app::lua_bind::WeaponSnakeNikitaMissileKineticEnergyNormal__set_rot_z_impl(pWVar7,fVar22);
          pWVar7 = (WeaponSnakeNikitaMissileKineticEnergyNormal *)
                   lib::L2CValue::as_pointer(aLStack208);
          fVar22 = (float)app::lua_bind::WeaponSnakeNikitaMissileKineticEnergyNormal__rot_z_impl
                                    (pWVar7);
          lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),fVar22);
          lib::L2CValue::operator_((L2CValue *)(auStack352 + 0x10),(L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::operator_(aLStack304);
          lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_FLOAT_TOPNB_ROTX);
          fVar22 = (float)lib::L2CValue::as_number(aLStack304);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
          lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack176);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        }
        lib::L2CValue::L2CValue((L2CValue *)auStack416,(L2CValue *)auStack288);
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_SE_INTERVAL);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
        puVar19 = &local_80;
        uVar8 = lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)puVar19);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar8 & 1) == 0) {
          lib::L2CAgent::math_abs((L2CAgent *)auStack416,(L2CValue *)puVar19);
          lib::L2CValue::L2CValue(aLStack144,0x135d42378a);
          lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0xce2ebedb8);
          uVar8 = lib::L2CValue::as_integer(aLStack144);
          uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
          fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar9);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
          uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_80,0x147061ec2a);
            HVar16 = lib::L2CValue::as_hash((L2CValue *)&local_80);
            iVar4 = app::lua_bind::SoundModule__play_se_impl
                              (*ppBVar21,HVar16,true,false,false,false,0);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::L2CValue(aLStack144,0x135d42378a);
            lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0xf16e3c5a9);
            uVar8 = lib::L2CValue::as_integer(aLStack144);
            uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
            iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar8,uVar9);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
            lib::L2CValue::L2CValue
                      ((L2CValue *)auStack176,
                       _WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_SE_INTERVAL);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack176);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar5);
            lib::L2CValue::_L2CValue((L2CValue *)auStack176);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
            lib::L2CValue::_L2CValue(aLStack144);
          }
        }
        lib::L2CValue::_L2CValue((L2CValue *)auStack416);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        lVar24 = -0x100;
        goto LAB_7100032e68;
      }
      fVar22 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar21);
      lib::L2CValue::L2CValue(aLStack144,fVar22);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      pppvVar18 = &local_70;
      uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)pppvVar18);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar8 & 1) == 0) goto LAB_7100032628;
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,
                 _WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_INT_DAMAGE_ROT_FRAME);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__dec_int_impl(*ppBVar21,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_FLOAT_DAMAGE_ROT);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar22);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLOAT_PREV_ROT);
      fVar22 = (float)lib::L2CValue::as_number(aLStack240);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
      pWVar7 = (WeaponSnakeNikitaMissileKineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack208);
      app::lua_bind::WeaponSnakeNikitaMissileKineticEnergyNormal__set_rot_z_impl(pWVar7,fVar22);
      lib::L2CValue::operator_((L2CValue *)&local_80);
      lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_FLOAT_TOPNB_ROTX);
      fVar22 = (float)lib::L2CValue::as_number(aLStack144);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lVar24 = -0x70;
LAB_7100032e68:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar24));
    }
    pLVar20 = (L2CValue *)0x5;
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar10);
    fVar22 = (float)app::SlopeModuleSimple::gravity_angle(pBVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar22);
    lib::L2CAgent::math_deg((L2CAgent *)&local_70,pLVar20);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::operator_(aLStack256,aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.5);
    pppvVar18 = &local_70;
    lib::L2CValue::operator_
              ((L2CValue *)&FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_JUMP,
               (L2CValue *)pppvVar18);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CAgent::math_deg((L2CAgent *)auStack176,(L2CValue *)pppvVar18);
    lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack288,_WEAPON_SNAKE_NIKITA_MISSILE_POSTURE_ROT_NODE_TOPNB);
    uVar8 = lib::L2CValue::as_number((L2CValue *)&local_80);
    lVar24 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
    uVar23 = lib::L2CValue::as_number((L2CValue *)(auStack288 + 0x10));
    local_70 = (void **)(uVar8 & 0xffffffff | lVar24 << 0x20);
    plStack104 = (lua_State *)(ulong)uVar23;
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    app::lua_bind::PostureModule__set_rot_impl(*ppBVar21,(Vector3f *)&local_70,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,
               _WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLOAT_TURN_STABLE_SPEED);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),fVar22);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLOAT_STABLE_SPEED
              );
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar22);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pWVar7 = (WeaponSnakeNikitaMissileKineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack208);
    fVar22 = (float)app::lua_bind::WeaponSnakeNikitaMissileKineticEnergyNormal__rot_z_impl(pWVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar22);
    uVar8 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      uVar8 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
      uVar23 = lib::L2CValue::as_number((L2CValue *)&local_80);
      local_70 = (void **)(uVar8 & 0xffffffff | (ulong)uVar23 << 0x20);
      plStack104 = (lua_State *)0x0;
      pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack208);
      app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar12,(Vector2f *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack288 + 0x10),
                 _WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLAG_BRAKE_START);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0.0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_70,
                   _WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_FLOAT_ROTZ_STABLE_MAX);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar22);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_70,
                   _WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_FLOAT_ROTZ_STABLE_MIN);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue(aLStack304,fVar22);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        pKVar14 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack208);
        uVar25 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar14);
        lib::L2CValue::L2CValue(aLStack448,(float)uVar25);
        lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar25 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack448);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack432);
        cVar1 = (char)&stack0xfffffffffffffff0;
        lua2cpp::L2CFighterBase::Vector2__create
                  (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack448);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x18cdc1683)
        ;
        uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)(auStack176 + 0x10));
        if ((uVar8 & 1) == 0) {
          pLVar10 = (L2CValue *)
                    lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x18cdc1683);
          uVar8 = lib::L2CValue::operator__((L2CValue *)auStack176,pLVar10);
          if ((uVar8 & 1) == 0) {
            pKVar14 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack224);
            pfVar15 = (float *)app::lua_bind::KineticEnergy__get_rotation_impl(pKVar14);
            lib::L2CValue::L2CValue(aLStack496,*pfVar15);
            lib::L2CValue::L2CValue(aLStack480,pfVar15[1]);
            lib::L2CValue::L2CValue(aLStack464,pfVar15[2]);
            FUN_7100018740(&local_80,this,aLStack496);
            lib::L2CValue::_L2CValue(aLStack464);
            lib::L2CValue::_L2CValue(aLStack480);
            lib::L2CValue::_L2CValue(aLStack496);
            pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_80,0x162d277af);
            lib::L2CValue::operator_(pLVar10,(L2CValue *)(auStack176 + 0x10));
            lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)(auStack176 + 0x10));
            lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)auStack368);
            lib::L2CValue::_L2CValue((L2CValue *)auStack368);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)auStack352);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,1);
            lib::L2CValue::operator_((L2CValue *)&local_70,(L2CValue *)auStack352);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::operator_(aLStack304,aLStack528);
            lib::L2CValue::operator_(aLStack384,aLStack512);
            lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),(L2CValue *)auStack368);
            lib::L2CValue::_L2CValue((L2CValue *)auStack368);
            lib::L2CValue::_L2CValue(aLStack512);
            lib::L2CValue::_L2CValue(aLStack528);
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue((L2CValue *)auStack352);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          }
          else {
            lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),(L2CValue *)auStack288);
          }
        }
        else {
          lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),aLStack304);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
        uVar8 = lib::L2CValue::as_number((L2CValue *)&local_80);
        lVar24 = lib::L2CValue::as_number((L2CValue *)auStack352);
        uVar23 = lib::L2CValue::as_number((L2CValue *)(auStack288 + 0x10));
        local_70 = (void **)(uVar8 & 0xffffffff | lVar24 << 0x20);
        plStack104 = (lua_State *)(ulong)uVar23;
        pKVar13 = (KineticEnergyRotNormal *)lib::L2CValue::as_pointer(aLStack224);
        app::lua_bind::KineticEnergyRotNormal__set_stable_speed_impl(pKVar13,(Vector3f *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        lVar24 = -0x100;
        goto LAB_7100033564;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      uVar8 = lib::L2CValue::as_number((L2CValue *)auStack176);
      uVar23 = lib::L2CValue::as_number((L2CValue *)&local_80);
      local_70 = (void **)(uVar8 & 0xffffffff | (ulong)uVar23 << 0x20);
      plStack104 = (lua_State *)0x0;
      pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack208);
      app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar12,(Vector2f *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack288 + 0x10),
                 _WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLAG_BRAKE_START);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
        lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0.0);
        lib::L2CValue::L2CValue
                  (aLStack304,_WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_FLOAT_ROTZ_STABLE_MAX);
        iVar4 = lib::L2CValue::as_integer(aLStack304);
        fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar22);
        uVar8 = lib::L2CValue::as_number((L2CValue *)&local_80);
        lVar24 = lib::L2CValue::as_number((L2CValue *)(auStack288 + 0x10));
        uVar23 = lib::L2CValue::as_number((L2CValue *)auStack288);
        local_70 = (void **)(uVar8 & 0xffffffff | lVar24 << 0x20);
        plStack104 = (lua_State *)(ulong)uVar23;
        pKVar13 = (KineticEnergyRotNormal *)lib::L2CValue::as_pointer(aLStack224);
        app::lua_bind::KineticEnergyRotNormal__set_stable_speed_impl(pKVar13,(Vector3f *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)auStack288);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
        lVar24 = -0x70;
LAB_7100033564:
        lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar24));
      }
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack288 + 0x10),
               _WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_BRAKE_COUNT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
    uVar8 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0.0);
      uVar8 = lib::L2CValue::as_number((L2CValue *)&local_80);
      uVar23 = lib::L2CValue::as_number((L2CValue *)(auStack288 + 0x10));
      local_70 = (void **)(uVar8 & 0xffffffff | (ulong)uVar23 << 0x20);
      plStack104 = (lua_State *)0x0;
      pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack208);
      app::lua_bind::KineticEnergyNormal__set_accel_impl(pKVar12,(Vector2f *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0.0);
      uVar8 = lib::L2CValue::as_number((L2CValue *)&local_80);
      uVar23 = lib::L2CValue::as_number((L2CValue *)(auStack288 + 0x10));
      local_70 = (void **)(uVar8 & 0xffffffff | (ulong)uVar23 << 0x20);
      plStack104 = (lua_State *)0x0;
      pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack208);
      app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar12,(Vector2f *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_BRAKE_COUNT)
      ;
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__dec_int_impl(*ppBVar21,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0.0);
      lib::L2CValue::L2CValue
                (aLStack304,_WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_FLOAT_ROTZ_STABLE_MAX);
      iVar4 = lib::L2CValue::as_integer(aLStack304);
      fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar22);
      uVar8 = lib::L2CValue::as_number((L2CValue *)&local_80);
      lVar24 = lib::L2CValue::as_number((L2CValue *)(auStack288 + 0x10));
      uVar23 = lib::L2CValue::as_number((L2CValue *)auStack288);
      local_70 = (void **)(uVar8 & 0xffffffff | lVar24 << 0x20);
      plStack104 = (lua_State *)(ulong)uVar23;
      pKVar13 = (KineticEnergyRotNormal *)lib::L2CValue::as_pointer(aLStack224);
      app::lua_bind::KineticEnergyRotNormal__set_stable_speed_impl(pKVar13,(Vector3f *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLAG_BRAKE_START
                );
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar21,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,
             _WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_SMOKE_EFFECT_HANDLE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
  lib::L2CValue::L2CValue(aLStack144,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_EFFECT_HANDLE_NULL);
  uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLAG_IS_STRAIGHT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
    uVar8 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar8 & 1) != 0) goto LAB_7100033ba4;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_EFFECT_HANDLE_NULL);
  uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar8 & 1) == 0) {
    uVar23 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::EffectModule__remove_impl(*ppBVar21,uVar23,0);
  }
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x14f75f9804);
    lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLAG_IS_STRAIGHT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar4);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x148058a892);
    lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLAG_IS_STRAIGHT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar21,iVar4);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack208,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,-2.5);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),1.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack352,false);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,_EFFECT_SUB_ATTRIBUTE_CONCLUDE_STATUS);
  HVar16 = lib::L2CValue::as_hash((L2CValue *)(auStack176 + 0x10));
  HVar17 = lib::L2CValue::as_hash(aLStack208);
  uVar8 = lib::L2CValue::as_number(aLStack224);
  lVar24 = lib::L2CValue::as_number(aLStack240);
  uVar23 = lib::L2CValue::as_number(aLStack256);
  local_70 = (void **)(uVar8 & 0xffffffff | lVar24 << 0x20);
  plStack104 = (lua_State *)(ulong)uVar23;
  uVar8 = lib::L2CValue::as_number((L2CValue *)(auStack288 + 0x10));
  lVar24 = lib::L2CValue::as_number((L2CValue *)auStack288);
  uVar23 = lib::L2CValue::as_number(aLStack304);
  local_80 = uVar8 & 0xffffffff | lVar24 << 0x20;
  pBStack120 = (BattleObject *)(ulong)uVar23;
  fVar22 = (float)lib::L2CValue::as_number((L2CValue *)(auStack352 + 0x10));
  bVar2 = lib::L2CValue::as_bool((L2CValue *)auStack352);
  uVar23 = lib::L2CValue::as_integer((L2CValue *)auStack368);
  uVar23 = app::lua_bind::EffectModule__req_follow_impl
                     (*ppBVar21,HVar16,HVar17,(Vector3f *)&local_70,(Vector3f *)&local_80,fVar22,
                      (bool)(bVar2 & 1),uVar23,0,-1,in_stack_fffffffffffffda4,0,
                      (bool)in_stack_fffffffffffffdac,false);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,uVar23);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,
             _WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_SMOKE_EFFECT_HANDLE);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
LAB_7100033ba4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack192);
  return;
}

