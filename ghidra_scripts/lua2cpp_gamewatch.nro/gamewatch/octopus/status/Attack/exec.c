
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponGamewatchOctopus::status::Attack_exec_stop(long this)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CTable *pLVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  Hash40 HVar10;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *return_value;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
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
  L2CValue aLStack144 [16];
  undefined8 local_80;
  ulong uStack120;
  
  lib::L2CValue::L2CValue(aLStack336,_WEAPON_GAMEWATCH_OCTOPUS_LEG_SIZE);
  iVar1 = _WEAPON_GAMEWATCH_OCTOPUS_LEG_SIZE;
  if (0 < _WEAPON_GAMEWATCH_OCTOPUS_LEG_SIZE) {
    iVar11 = 0;
    do {
      lib::L2CValue::L2CValue
                (aLStack352,
                 iVar11 + _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_FLAG_CATCH_OBJECT_LEG_A);
      lib::L2CValue::L2CValue
                (aLStack368,iVar11 + _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_FLAG_FIX_LEG_A);
      iVar4 = lib::L2CValue::as_integer(aLStack352);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(this + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack384,(bool)(bVar2 & 1));
      iVar4 = lib::L2CValue::as_integer(aLStack368);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(this + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack400,(bool)(bVar2 & 1));
      uVar6 = lib::L2CValue::operator__(aLStack384,aLStack400);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator_(aLStack400,aLStack384);
        lib::L2CValue::L2CValue(aLStack416,iVar11);
        lib::L2CValue::L2CValue(aLStack432,aLStack400);
        lib::L2CValue::L2CValue(aLStack288,aLStack416);
        pLVar7 = (L2CTable *)operator_new(0x48);
        lib::L2CTable::L2CTable(pLVar7,4);
        lib::L2CValue::L2CValue(aLStack224,pLVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x5dc16a790);
        lib::L2CValue::L2CValue(aLStack144,0x5451ff62a);
        lib::L2CValue::L2CValue(aLStack160,0x53218c6bc);
        lib::L2CValue::L2CValue(aLStack208,0x5ac7c531f);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,1);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_80);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,2);
        lib::L2CValue::operator_(pLVar8,aLStack144);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,3);
        lib::L2CValue::operator_(pLVar8,aLStack160);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,4);
        lib::L2CValue::operator_(pLVar8,aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,1);
        lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,aLStack144);
        lib::L2CValue::L2CValue(aLStack272,pLVar8);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
        bVar2 = lib::L2CValue::operator__(aLStack432,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
        HVar9 = lib::L2CValue::as_hash(aLStack272);
        bVar2 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::VisibilityModule__set_material_anim_priority_impl
                  (*(BattleObjectModuleAccessor **)(this + 0x40),HVar9,(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
        uVar6 = lib::L2CValue::operator__(aLStack432,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        if ((uVar6 & 1) == 0) {
          HVar9 = lib::L2CValue::as_hash(aLStack272);
          app::lua_bind::VisibilityModule__set_default_impl
                    (*(BattleObjectModuleAccessor **)(this + 0x40),HVar9);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
          uVar6 = lib::L2CValue::operator__(aLStack416,(L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack144,_WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_CATCH_PATTERN_LEG_A
                      );
            iVar4 = lib::L2CValue::as_integer(aLStack144);
            iVar4 = app::lua_bind::WorkModule__get_int_impl
                              (*(BattleObjectModuleAccessor **)(this + 0x40),iVar4);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::L2CValue
                      (aLStack144,
                       _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_CATCH_PATTERN_LEG_A_FIX);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            iVar5 = lib::L2CValue::as_integer(aLStack144);
            app::lua_bind::WorkModule__set_int_impl
                      (*(BattleObjectModuleAccessor **)(this + 0x40),iVar4,iVar5);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          }
          lib::L2CValue::L2CValue(aLStack320,aLStack416);
          pLVar7 = (L2CTable *)operator_new(0x48);
          lib::L2CTable::L2CTable(pLVar7,4);
          lib::L2CValue::L2CValue(aLStack256,pLVar7);
          pLVar7 = (L2CTable *)operator_new(0x48);
          lib::L2CTable::L2CTable(pLVar7,2);
          lib::L2CValue::L2CValue(aLStack160,pLVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0xa7546b35d);
          lib::L2CValue::L2CValue(aLStack144,0xb5a431fb8);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,1);
          lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_80);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,2);
          lib::L2CValue::operator_(pLVar8,aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          pLVar7 = (L2CTable *)operator_new(0x48);
          lib::L2CTable::L2CTable(pLVar7,2);
          lib::L2CValue::L2CValue(aLStack208,pLVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0x82afa0315);
          lib::L2CValue::L2CValue(aLStack144,0);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,1);
          lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_80);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,2);
          lib::L2CValue::operator_(pLVar8,aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          pLVar7 = (L2CTable *)operator_new(0x48);
          lib::L2CTable::L2CTable(pLVar7,2);
          lib::L2CValue::L2CValue(aLStack224,pLVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0x892466470);
          lib::L2CValue::L2CValue(aLStack144,0);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,1);
          lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_80);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,2);
          lib::L2CValue::operator_(pLVar8,aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          pLVar7 = (L2CTable *)operator_new(0x48);
          lib::L2CTable::L2CTable(pLVar7,2);
          lib::L2CValue::L2CValue(aLStack240,pLVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0x80f915cc9);
          lib::L2CValue::L2CValue(aLStack144,0);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,1);
          lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_80);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,2);
          lib::L2CValue::operator_(pLVar8,aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,1);
          lib::L2CValue::operator_(pLVar8,aLStack160);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,2);
          lib::L2CValue::operator_(pLVar8,aLStack208);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,3);
          lib::L2CValue::operator_(pLVar8,aLStack224);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,4);
          lib::L2CValue::operator_(pLVar8,aLStack240);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
          uVar6 = lib::L2CValue::operator__(aLStack320,(L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_80,1);
            lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,aLStack144);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__(pLVar8,1);
            lib::L2CValue::L2CValue(aLStack304,pLVar8);
            lib::L2CValue::_L2CValue(aLStack144);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_80,1);
            lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack256,aLStack144);
            lib::L2CValue::L2CValue
                      (aLStack224,
                       _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_CATCH_PATTERN_LEG_A_FIX);
            iVar4 = lib::L2CValue::as_integer(aLStack224);
            iVar4 = app::lua_bind::WorkModule__get_int_impl
                              (*(BattleObjectModuleAccessor **)(this + 0x40),iVar4);
            lib::L2CValue::L2CValue(aLStack208,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,1);
            lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__(pLVar8,aLStack160);
            lib::L2CValue::L2CValue(aLStack304,pLVar8);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack144);
          }
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack320);
          HVar9 = lib::L2CValue::as_hash(aLStack272);
          HVar10 = lib::L2CValue::as_hash(aLStack304);
          app::lua_bind::VisibilityModule__set_impl
                    (*(BattleObjectModuleAccessor **)(this + 0x40),HVar9,HVar10);
          lib::L2CValue::_L2CValue(aLStack304);
        }
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack416);
        bVar2 = lib::L2CValue::as_bool(aLStack400);
        iVar4 = lib::L2CValue::as_integer(aLStack368);
        app::lua_bind::WorkModule__set_flag_impl
                  (*(BattleObjectModuleAccessor **)(this + 0x40),(bool)(bVar2 & 1),iVar4);
      }
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack400);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack496,iVar11);
        pLVar7 = (L2CTable *)operator_new(0x48);
        lib::L2CTable::L2CTable(pLVar7,0);
        lib::L2CValue::L2CValue(aLStack160,pLVar7);
        pLVar7 = (L2CTable *)operator_new(0x48);
        lib::L2CTable::L2CTable(pLVar7,0);
        lib::L2CValue::L2CValue(aLStack144,pLVar7);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x5f1d52900);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,1);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x58f6455bd);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0);
        lib::L2CValue::operator_(pLVar8,aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,1);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x543f12b79);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,2);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x5c3e34b82);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,3);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x5fba5edd3);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
        uVar6 = lib::L2CValue::operator__(aLStack496,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        bVar3 = (uVar6 & 1) == 0;
        if (bVar3) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,aLStack496);
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,aLStack496);
          lib::L2CValue::L2CValue
                    (aLStack192,
                     _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_CATCH_PATTERN_LEG_A_FIX);
          iVar4 = lib::L2CValue::as_integer(aLStack192);
          iVar4 = app::lua_bind::WorkModule__get_int_impl
                            (*(BattleObjectModuleAccessor **)(this + 0x40),iVar4);
          lib::L2CValue::L2CValue(aLStack176,iVar4);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(pLVar8,aLStack176);
        }
        lib::L2CValue::L2CValue(aLStack224,pLVar8);
        if (!bVar3) {
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
        }
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack144,0);
        lib::L2CValue::L2CValue(aLStack160,0);
        lib::L2CValue::L2CValue(aLStack240,0);
        HVar9 = lib::L2CValue::as_hash(aLStack224);
        local_80._0_4_ = (float)lib::L2CValue::as_number(aLStack144);
        local_80._4_4_ = (float)lib::L2CValue::as_number(aLStack160);
        uVar12 = lib::L2CValue::as_number(aLStack240);
        uStack120 = (ulong)uVar12;
        app::lua_bind::ModelModule__joint_global_position_impl
                  (*(BattleObjectModuleAccessor **)(this + 0x40),HVar9,(Vector3f *)&local_80,true);
        lib::L2CValue::L2CValue(aLStack480,(float)local_80);
        lib::L2CValue::L2CValue(aLStack464,local_80._4_4_);
        lib::L2CValue::L2CValue(aLStack448,(float)uStack120);
        FUN_710001de50(aLStack208,this,aLStack480);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue(aLStack464);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack496);
        lib::L2CValue::L2CValue(aLStack160,iVar11);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        HVar9 = app::lua_bind::GrabModule__node_impl
                          (*(BattleObjectModuleAccessor **)(this + 0x40),iVar4);
        lib::L2CValue::L2CValue(aLStack144,HVar9);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
        this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
        this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x162d277af);
        lib::L2CValue::L2CValue(aLStack224,true);
        HVar9 = lib::L2CValue::as_hash(aLStack144);
        uVar13 = lib::L2CValue::as_number(pLVar8);
        uVar14 = lib::L2CValue::as_number(this_00);
        uVar12 = lib::L2CValue::as_number(this_01);
        local_80 = CONCAT44(uVar14,uVar13);
        uStack120 = (ulong)uVar12;
        bVar2 = lib::L2CValue::as_bool(aLStack224);
        app::lua_bind::ModelModule__set_joint_translate_impl
                  (*(BattleObjectModuleAccessor **)(this + 0x40),HVar9,(Vector3f *)&local_80,
                   (bool)(bVar2 & 1),false);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack208);
      }
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar1);
  }
  lib::L2CValue::L2CValue(return_value,0);
  lib::L2CValue::_L2CValue(aLStack336);
  return;
}

