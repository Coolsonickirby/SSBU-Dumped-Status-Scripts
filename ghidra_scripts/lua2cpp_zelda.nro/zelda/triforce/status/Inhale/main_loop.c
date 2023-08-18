
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponZeldaTriforce::status::Inhale_main_loop
          (L2CWeaponZeldaTriforce *this,L2CValue *return_value)

{
  Hash40Map *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FighterEntryID FVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  float *pfVar11;
  void *pvVar12;
  FighterEntry *pFVar13;
  BattleObjectModuleAccessor *pBVar14;
  L2CValue *pLVar15;
  ulong *puVar16;
  ulong uVar17;
  Hash40 HVar18;
  float fVar19;
  uint uVar20;
  long lVar21;
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  ulong auStack576 [2];
  ulong auStack560 [2];
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
  ulong local_150;
  ulong uStack328;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  ulong auStack240 [2];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong auStack160 [2];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack240,_WEAPON_ZELDA_TRIFORCE_STATUS_WORK_INT_HIT_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack656,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)auStack240);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0x50000000);
  uVar8 = lib::L2CValue::operator__(aLStack656,(L2CValue *)auStack240);
  lib::L2CValue::_L2CValue((L2CValue *)auStack240);
  if ((uVar8 & 1) != 0) {
    this_00 = &this[1].functions;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xc2fb299d4);
    lib::L2CValue::L2CValue(aLStack192,pLVar9);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xcb3133d6b);
    lib::L2CValue::L2CValue(aLStack256,pLVar9);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xc956c5bef);
    uVar8 = lib::L2CValue::operator__(pLVar9,pLVar10);
    if ((uVar8 & 1) == 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1419a5b0d5);
      lib::L2CValue::operator_(aLStack192,pLVar9);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)auStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack240);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1463218bf9);
      lib::L2CValue::operator_(aLStack256,pLVar9);
      lib::L2CValue::operator_(aLStack256,(L2CValue *)auStack240);
    }
    else {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xc956c5bef);
      lib::L2CValue::operator_(pLVar9,pLVar10);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack352,1.0);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack368,1.0);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1419a5b0d5);
      lib::L2CValue::L2CValue(aLStack384,pLVar9);
      lib::L2CValue::L2CValue(aLStack400,(L2CValue *)auStack240);
      lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_90);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_150);
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::L2CValue(aLStack416,1.0);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1463218bf9);
      lib::L2CValue::L2CValue(aLStack432,pLVar9);
      lib::L2CValue::L2CValue(aLStack448,(L2CValue *)auStack240);
      lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_90);
      lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_150);
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
    }
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    fVar19 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,fVar19);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_150);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)auStack240);
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    pfVar11 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,*pfVar11);
    lib::L2CValue::L2CValue(aLStack224,pfVar11[1]);
    lib::L2CValue::L2CValue(aLStack208,pfVar11[2]);
    FUN_710000bf50(aLStack464,this,auStack240);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    iVar3 = app::lua_bind::TeamModule__team_no_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack480,iVar3);
    iVar3 = app::lua_bind::FighterManager__entry_count_impl(LUA_SCRIPT_LINE_WAZA_CUSTOMIZE);
    lib::L2CValue::L2CValue(aLStack496,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,1);
    lib::L2CValue::operator_(aLStack496,(L2CValue *)&local_150);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if (-1 < iVar3) {
      iVar7 = 0;
      do {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar7);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        iVar4 = app::lua_bind::FighterManager__get_entry_id_impl
                          (LUA_SCRIPT_LINE_WAZA_CUSTOMIZE,iVar4);
        lib::L2CValue::L2CValue(aLStack512,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        FVar5 = lib::L2CValue::as_integer(aLStack512);
        pvVar12 = (void *)app::lua_bind::FighterManager__get_fighter_entry_impl
                                    (LUA_SCRIPT_LINE_WAZA_CUSTOMIZE,FVar5);
        if (pvVar12 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack528,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
        }
        else {
          lib::L2CValue::L2CValue(aLStack528,pvVar12);
        }
        pFVar13 = (FighterEntry *)lib::L2CValue::as_pointer(aLStack528);
        uVar6 = app::lua_bind::FighterEntry__current_fighter_id_impl(pFVar13);
        lib::L2CValue::L2CValue(aLStack544,uVar6);
        uVar6 = lib::L2CValue::as_integer(aLStack544);
        bVar1 = app::sv_battle_object::is_null(uVar6);
        lib::L2CValue::L2CValue((L2CValue *)auStack160,(bool)(bVar1 & 1));
        lib::L2CValue::operator_((L2CValue *)auStack160);
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          puVar16 = auStack160;
LAB_710002170c:
          lib::L2CValue::_L2CValue((L2CValue *)puVar16);
        }
        else {
          uVar6 = lib::L2CValue::as_integer(aLStack544);
          bVar1 = app::sv_battle_object::is_active(uVar6);
          lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)auStack160);
          if ((bVar2 & 1U) != 0) {
            uVar6 = lib::L2CValue::as_integer(aLStack544);
            pvVar12 = (void *)app::sv_battle_object::module_accessor(uVar6);
            if (pvVar12 == (void *)0x0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)auStack560,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)auStack560,pvVar12);
            }
            pBVar14 = (BattleObjectModuleAccessor *)
                      lib::L2CValue::as_pointer((L2CValue *)auStack560);
            iVar4 = app::lua_bind::TeamModule__team_no_impl(pBVar14);
            lib::L2CValue::L2CValue((L2CValue *)auStack576,iVar4);
            uVar8 = lib::L2CValue::operator__(aLStack480,(L2CValue *)auStack576);
            if ((uVar8 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack608,(L2CValue *)auStack560);
              lib::L2CValue::L2CValue(aLStack176,0);
              iVar4 = lib::L2CValue::as_integer(aLStack176);
              pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack608);
              iVar4 = app::lua_bind::HitModule__get_total_status_impl(pBVar14,iVar4);
              lib::L2CValue::L2CValue((L2CValue *)auStack160,iVar4);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,_HIT_STATUS_NORMAL);
              uVar8 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)&local_90);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              lib::L2CValue::_L2CValue((L2CValue *)auStack160);
              lib::L2CValue::_L2CValue(aLStack176);
              if ((uVar8 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack592,false);
              }
              else {
                lib::L2CValue::L2CValue(aLStack176,0);
                iVar4 = lib::L2CValue::as_integer(aLStack176);
                pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack608);
                iVar4 = app::lua_bind::HitModule__get_total_status_disguise_impl(pBVar14,iVar4);
                lib::L2CValue::L2CValue((L2CValue *)auStack160,iVar4);
                lib::L2CValue::L2CValue((L2CValue *)&local_90,_HIT_STATUS_NORMAL);
                uVar8 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)&local_90);
                lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                lib::L2CValue::_L2CValue((L2CValue *)auStack160);
                lib::L2CValue::_L2CValue(aLStack176);
                if ((uVar8 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack592,false);
                }
                else {
                  pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack608);
                  iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar14);
                  lib::L2CValue::L2CValue((L2CValue *)auStack160,iVar4);
                  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_STATUS_KIND_DAMAGE_FLY);
                  uVar8 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)&local_90);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                  if ((uVar8 & 1) == 0) {
                    lib::L2CValue::L2CValue
                              ((L2CValue *)&local_90,FIGHTER_STATUS_KIND_DAMAGE_FLY_ROLL);
                    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)&local_90);
                    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                    if ((uVar8 & 1) != 0) goto LAB_7100021494;
                    lib::L2CValue::L2CValue
                              ((L2CValue *)&local_90,_FIGHTER_STATUS_KIND_DAMAGE_FLY_METEOR);
                    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)&local_90);
                    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                    if ((uVar8 & 1) != 0) goto LAB_7100021494;
                    lib::L2CValue::L2CValue
                              ((L2CValue *)&local_90,_FIGHTER_STATUS_KIND_FINAL_VISUAL_ATTACK_OTHER)
                    ;
                    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)&local_90);
                    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                    if ((uVar8 & 1) != 0) goto LAB_7100021494;
                    lib::L2CValue::L2CValue
                              ((L2CValue *)&local_90,_FIGHTER_STATUS_KIND_SAVING_DAMAGE_FLY);
                    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)&local_90);
                    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                    if ((uVar8 & 1) != 0) goto LAB_7100021494;
                    lib::L2CValue::L2CValue(aLStack592,true);
                  }
                  else {
LAB_7100021494:
                    lib::L2CValue::L2CValue(aLStack592,false);
                  }
                  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
                }
              }
              bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack592);
              lib::L2CValue::_L2CValue(aLStack592);
              lib::L2CValue::_L2CValue(aLStack608);
              lib::L2CValue::_L2CValue((L2CValue *)auStack576);
              if ((bVar2 & 1U) != 0) {
                pBVar14 = (BattleObjectModuleAccessor *)
                          lib::L2CValue::as_pointer((L2CValue *)auStack560);
                pfVar11 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar14);
                lib::L2CValue::L2CValue((L2CValue *)&local_150,*pfVar11);
                lib::L2CValue::L2CValue(aLStack320,pfVar11[1]);
                lib::L2CValue::L2CValue(aLStack304,pfVar11[2]);
                FUN_710000bf50(&local_90,this,&local_150);
                lib::L2CValue::operator_(aLStack464,(L2CValue *)&local_90);
                lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                lib::L2CValue::_L2CValue(aLStack304);
                lib::L2CValue::_L2CValue(aLStack320);
                lib::L2CValue::_L2CValue((L2CValue *)&local_150);
                lib::L2CValue::L2CValue(aLStack624,(L2CValue *)auStack160);
                lua2cpp::L2CFighterBase::Vector3__length(this,(L2CValue)0x90);
                lib::L2CValue::_L2CValue(aLStack624);
                lib::L2CValue::L2CValue(aLStack640,(L2CValue *)auStack160);
                lua2cpp::L2CFighterBase::Vector3__normalize(this,(L2CValue)0x80);
                lib::L2CValue::operator_((L2CValue *)&local_90,aLStack192);
                lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                lib::L2CValue::_L2CValue(aLStack640);
                uVar8 = lib::L2CValue::operator_(aLStack176,aLStack256);
                if ((uVar8 & 1) != 0) {
                  lib::L2CValue::L2CValue((L2CValue *)&local_90,1e-05);
                  uVar8 = lib::L2CValue::operator_((L2CValue *)&local_90,aLStack176);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                  if ((uVar8 & 1) != 0) {
                    lib::L2CValue::L2CValue(aLStack592,_KINETIC_OUTSIDE_ENERGY_TYPE_WIND);
                    pLVar9 = (L2CValue *)
                             lib::L2CValue::operator__((L2CValue *)auStack576,0x18cdc1683);
                    pLVar10 = (L2CValue *)
                              lib::L2CValue::operator__((L2CValue *)auStack576,0x1fbdb2615);
                    pLVar15 = (L2CValue *)
                              lib::L2CValue::operator__((L2CValue *)auStack576,0x162d277af);
                    uVar6 = lib::L2CValue::as_integer(aLStack544);
                    iVar4 = lib::L2CValue::as_integer(aLStack592);
                    uVar8 = lib::L2CValue::as_number(pLVar9);
                    lVar21 = lib::L2CValue::as_number(pLVar10);
                    uVar20 = lib::L2CValue::as_number(pLVar15);
                    local_90 = uVar8 & 0xffffffff | lVar21 << 0x20;
                    uStack136 = (ulong)uVar20;
                    app::sv_battle_object::add_speed_outside(uVar6,iVar4,(Vector3f *)&local_90);
                    lib::L2CValue::_L2CValue(aLStack592);
                  }
                }
                lib::L2CValue::_L2CValue((L2CValue *)auStack576);
                lib::L2CValue::_L2CValue(aLStack176);
                puVar16 = auStack160;
                goto LAB_7100021704;
              }
            }
            else {
              puVar16 = auStack576;
LAB_7100021704:
              lib::L2CValue::_L2CValue((L2CValue *)puVar16);
            }
            puVar16 = auStack560;
            goto LAB_710002170c;
          }
        }
        lib::L2CValue::_L2CValue(aLStack544);
        lib::L2CValue::_L2CValue(aLStack528);
        lib::L2CValue::_L2CValue(aLStack512);
        bVar2 = iVar7 < iVar3;
        iVar7 = iVar7 + 1;
      } while (bVar2);
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack160,0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack512,0.0);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    uVar8 = lib::L2CValue::as_number(aLStack176);
    uVar6 = lib::L2CValue::as_number(aLStack512);
    local_90 = uVar8 & 0xffffffff | (ulong)uVar6 << 0x20;
    uStack136 = 0;
    fVar19 = (float)lib::L2CValue::as_number(aLStack256);
    app::lua_bind::AreaModule__set_area_shape_circle_impl
              (this->moduleAccessor,iVar3,(Vector2f *)&local_90,fVar19);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack192);
    goto LAB_7100021f40;
  }
  lib::L2CValue::L2CValue(aLStack672,aLStack656);
  uVar6 = lib::L2CValue::as_integer(aLStack672);
  bVar1 = app::sv_battle_object::is_null(uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)&local_150);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack240);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    puVar16 = &local_150;
LAB_7100021e8c:
    lib::L2CValue::_L2CValue((L2CValue *)puVar16);
LAB_7100021e90:
    lib::L2CValue::L2CValue((L2CValue *)auStack240,0x50000000);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_150,_WEAPON_ZELDA_TRIFORCE_STATUS_WORK_INT_HIT_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
    iVar7 = lib::L2CValue::as_integer((L2CValue *)&local_150);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar7);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,0x1714dc7fa1);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
    HVar18 = lib::L2CValue::as_hash((L2CValue *)&local_150);
    app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar18);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    puVar16 = auStack240;
  }
  else {
    uVar6 = lib::L2CValue::as_integer(aLStack672);
    bVar1 = app::sv_battle_object::is_active(uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    if ((bVar2 & 1U) == 0) goto LAB_7100021e90;
    uVar6 = lib::L2CValue::as_integer(aLStack672);
    pvVar12 = (void *)app::sv_battle_object::module_accessor(uVar6);
    if (pvVar12 == (void *)0x0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack160,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)auStack160,pvVar12);
    }
    pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar14);
    lib::L2CValue::L2CValue(aLStack176,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,_FIGHTER_STATUS_KIND_STANDBY);
    uVar8 = lib::L2CValue::operator__(aLStack176,(L2CValue *)auStack240);
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    if ((uVar8 & 1) != 0) {
LAB_7100021e80:
      lib::L2CValue::_L2CValue(aLStack176);
      puVar16 = auStack160;
      goto LAB_7100021e8c;
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack240,_FIGHTER_STATUS_KIND_DEAD);
    uVar8 = lib::L2CValue::operator__(aLStack176,(L2CValue *)auStack240);
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    if ((uVar8 & 1) != 0) goto LAB_7100021e80;
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_INSTANCE_WORK_ID_FLAG_KNOCKOUT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(pBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar1 & 1));
    lib::L2CValue::operator_((L2CValue *)&local_150);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack240);
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar2 & 1U) == 0) goto LAB_7100021e80;
    pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
    pfVar11 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar14);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,*pfVar11);
    lib::L2CValue::L2CValue(aLStack224,pfVar11[1]);
    lib::L2CValue::L2CValue(aLStack208,pfVar11[2]);
    FUN_710000bf50(aLStack192,this,auStack240);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
    fVar19 = (float)app::lua_bind::GroundModule__get_z_impl(pBVar14);
    lib::L2CValue::L2CValue(aLStack256,fVar19);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,1.0);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_150);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
    lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack256);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
    pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
    uVar8 = lib::L2CValue::as_number(pLVar9);
    lVar21 = lib::L2CValue::as_number(pLVar10);
    uVar6 = lib::L2CValue::as_number(pLVar15);
    local_150 = uVar8 & 0xffffffff | lVar21 << 0x20;
    uStack328 = (ulong)uVar6;
    pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
    app::lua_bind::PostureModule__set_pos_impl(pBVar14,(Vector3f *)&local_150);
    pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
    fVar19 = (float)app::lua_bind::PostureModule__scale_impl(pBVar14);
    lib::L2CValue::L2CValue(aLStack256,fVar19);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x170c3e372e);
    lib::L2CValue::L2CValue(aLStack288,0);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar17 = lib::L2CValue::as_integer(aLStack288);
    pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
    fVar19 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar14,uVar8,uVar17);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,fVar19);
    lib::L2CValue::operator_((L2CValue *)&local_150,aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
    iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar14);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,FIGHTER_STATUS_KIND_CAPTURE_BLACKHOLE);
    uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_150);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_150,FIGHTER_STATUS_KIND_CAPTURE_BLACKHOLE);
      lib::L2CValue::L2CValue(aLStack288,false);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_150);
      bVar1 = lib::L2CValue::as_bool(aLStack288);
      pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
      bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                        (pBVar14,iVar3,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      pfVar11 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,*pfVar11);
      lib::L2CValue::L2CValue(aLStack320,pfVar11[1]);
      lib::L2CValue::L2CValue(aLStack304,pfVar11[2]);
      FUN_710000bf50(aLStack288,this,&local_150);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].functions,0xc2fb299d4);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].functions,0x1419a5b0d5);
      lib::L2CValue::operator_(pLVar9,pLVar10);
      lib::L2CValue::L2CValue(aLStack368,0x31ed91fca);
      lib::L2CValue::L2CValue(aLStack384,FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_INT_CATCH_NODE);
      lVar21 = lib::L2CValue::as_integer(aLStack368);
      iVar3 = lib::L2CValue::as_integer(aLStack384);
      pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
      app::lua_bind::WorkModule__set_int64_impl(pBVar14,lVar21,iVar3);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack368,FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_CATCH_POS_X)
      ;
      fVar19 = (float)lib::L2CValue::as_number(pLVar9);
      iVar3 = lib::L2CValue::as_integer(aLStack368);
      pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
      app::lua_bind::WorkModule__set_float_impl(pBVar14,fVar19,iVar3);
      lib::L2CValue::_L2CValue(aLStack368);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar9,aLStack272);
      lib::L2CValue::L2CValue
                (aLStack384,_FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_CATCH_POS_Y);
      fVar19 = (float)lib::L2CValue::as_number(aLStack368);
      iVar3 = lib::L2CValue::as_integer(aLStack384);
      pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
      app::lua_bind::WorkModule__set_float_impl(pBVar14,fVar19,iVar3);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x162d277af);
      lib::L2CValue::L2CValue(aLStack368,FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_CATCH_POS_Z)
      ;
      fVar19 = (float)lib::L2CValue::as_number(pLVar9);
      iVar3 = lib::L2CValue::as_integer(aLStack368);
      pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
      app::lua_bind::WorkModule__set_float_impl(pBVar14,fVar19,iVar3);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::L2CValue(aLStack368,0);
      lib::L2CValue::L2CValue
                (aLStack384,_FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_INT_PARAM_SCALING_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack368);
      iVar7 = lib::L2CValue::as_integer(aLStack384);
      pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
      app::lua_bind::WorkModule__set_int_impl(pBVar14,iVar3,iVar7);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::L2CValue(aLStack368,0);
      lib::L2CValue::L2CValue(aLStack384,FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_INT_FRAME_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack368);
      iVar7 = lib::L2CValue::as_integer(aLStack384);
      pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
      app::lua_bind::WorkModule__set_int_impl(pBVar14,iVar3,iVar7);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::L2CValue
                (aLStack368,_FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_INHALE_SPEED);
      fVar19 = (float)lib::L2CValue::as_number(aLStack352);
      iVar3 = lib::L2CValue::as_integer(aLStack368);
      pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
      app::lua_bind::WorkModule__set_float_impl(pBVar14,fVar19,iVar3);
      lib::L2CValue::_L2CValue(aLStack368);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].field_0x20,0x1541429c39);
      lib::L2CValue::operator_(pLVar10,pLVar9);
      pLVar9 = aLStack352;
LAB_710002236c:
      lib::L2CValue::_L2CValue(pLVar9);
      lib::L2CValue::_L2CValue(aLStack288);
    }
    else {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].field_0x20,0x1541429c39);
      lib::L2CValue::operator_(pLVar9,pLVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,10);
      uVar8 = lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_150);
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_150,FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_CATCH_POS_X
                  );
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_150);
        pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
        fVar19 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar14,iVar3);
        lib::L2CValue::L2CValue(aLStack352,fVar19);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_CATCH_POS_Y
                  );
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
        fVar19 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar14,iVar3);
        lib::L2CValue::L2CValue(aLStack368,fVar19);
        lib::L2CValue::L2CValue
                  (aLStack400,FIGHTER_STATUS_CAPTURE_BLACKHOLE_WORK_ID_FLOAT_CATCH_POS_Z);
        iVar3 = lib::L2CValue::as_integer(aLStack400);
        pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
        fVar19 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar14,iVar3);
        lib::L2CValue::L2CValue(aLStack384,fVar19);
        lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue((L2CValue *)&local_150);
        lib::L2CValue::L2CValue(aLStack416,0x31ed91fca);
        lib::L2CValue::L2CValue(aLStack432,0);
        lib::L2CValue::L2CValue(aLStack448,0);
        lib::L2CValue::L2CValue(aLStack464,0);
        lib::L2CValue::L2CValue(aLStack480,false);
        HVar18 = lib::L2CValue::as_hash(aLStack416);
        uVar8 = lib::L2CValue::as_number(aLStack432);
        lVar21 = lib::L2CValue::as_number(aLStack448);
        uVar6 = lib::L2CValue::as_number(aLStack464);
        local_90 = uVar8 & 0xffffffff | lVar21 << 0x20;
        uStack136 = (ulong)uVar6;
        bVar1 = lib::L2CValue::as_bool(aLStack480);
        pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
        app::lua_bind::ModelModule__joint_global_position_impl
                  (pBVar14,HVar18,(Vector3f *)&local_90,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_150,(float)local_90);
        lib::L2CValue::L2CValue(aLStack320,local_90._4_4_);
        lib::L2CValue::L2CValue(aLStack304,(float)uStack136);
        FUN_710000bf50(aLStack400,this,&local_150);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue((L2CValue *)&local_150);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::_L2CValue(aLStack464);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::L2CValue(aLStack432,aLStack288);
        lib::L2CValue::L2CValue(aLStack448,aLStack400);
        lua2cpp::L2CFighterBase::Vector2__distance(this,(L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0.1);
        uVar8 = lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue(aLStack432);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack160);
          app::lua_bind::WorkModule__on_flag_impl(pBVar14,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_ZELDA_TRIFORCE_STATUS_KIND_SEAL);
          lib::L2CValue::L2CValue(aLStack416,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        }
        pLVar9 = aLStack400;
        goto LAB_710002236c;
      }
    }
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    puVar16 = auStack160;
  }
  lib::L2CValue::_L2CValue((L2CValue *)puVar16);
  lib::L2CValue::_L2CValue(aLStack672);
LAB_7100021f40:
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].functions,0xb38b339df);
  lib::L2CValue::L2CValue(aLStack688,pLVar9);
  lib::L2CValue::L2CValue(aLStack704,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  FUN_710001ec30(this,aLStack688,aLStack704);
  lib::L2CValue::_L2CValue(aLStack704);
  lib::L2CValue::_L2CValue(aLStack688);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack656);
  return;
}

