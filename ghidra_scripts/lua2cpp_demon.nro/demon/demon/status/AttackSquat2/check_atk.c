
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackSquat2_check_atk(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  L2CTable *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  float *pfVar12;
  L2CValue *this_00;
  void *pvVar13;
  BattleObjectModuleAccessor *pBVar14;
  L2CValue *in_x1;
  L2CValue *in_x2;
  float fVar15;
  float fVar16;
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  undefined auStack248 [32];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack472,in_x1);
  lib::L2CValue::L2CValue(aLStack488,in_x2);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack488,0x5d6e20d24);
  lib::L2CValue::L2CValue(aLStack136,pLVar6);
  lib::L2CValue::L2CValue(aLStack216,COLLISION_KIND_HIT);
  uVar7 = lib::L2CValue::operator__(aLStack136,aLStack216);
  lib::L2CValue::_L2CValue(aLStack216);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack216,COLLISION_KIND_SHIELD);
    uVar7 = lib::L2CValue::operator__(aLStack136,aLStack216);
    lib::L2CValue::_L2CValue(aLStack216);
    if ((uVar7 & 1) == 0) goto LAB_71000122d0;
  }
  lib::L2CValue::L2CValue(aLStack216,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack168,0x1cdfe7abf1);
  uVar7 = lib::L2CValue::as_integer(aLStack216);
  uVar8 = lib::L2CValue::as_integer(aLStack168);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack152,iVar3);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::L2CValue(aLStack216,0);
  uVar7 = lib::L2CValue::operator_(aLStack216,aLStack152);
  lib::L2CValue::_L2CValue(aLStack216);
  if ((uVar7 & 1) != 0) {
    pLVar9 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(pLVar9,0);
    lib::L2CValue::L2CValue(aLStack168,pLVar9);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack216,0);
    lib::L2CValue::operator_(pLVar6,aLStack216);
    lib::L2CValue::_L2CValue(aLStack216);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack216,0);
    lib::L2CValue::operator_(pLVar6,aLStack216);
    lib::L2CValue::_L2CValue(aLStack216);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x162d277af);
    lib::L2CValue::L2CValue(aLStack216,0);
    lib::L2CValue::operator_(pLVar6,aLStack216);
    lib::L2CValue::_L2CValue(aLStack216);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x162d277af);
    pfVar12 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack216,*pfVar12);
    lib::L2CValue::L2CValue(aLStack200,pfVar12[1]);
    lib::L2CValue::L2CValue(aLStack184,pfVar12[2]);
    lib::L2CValue::operator_(pLVar6,aLStack216);
    lib::L2CValue::operator_(pLVar10,aLStack200);
    lib::L2CValue::operator_(pLVar11,aLStack184);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack216);
    pLVar9 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(pLVar9,0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack248 + 0x10),pLVar9);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack248 + 0x10),0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack216,0);
    lib::L2CValue::operator_(pLVar6,aLStack216);
    lib::L2CValue::_L2CValue(aLStack216);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack248 + 0x10),0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack216,0);
    lib::L2CValue::operator_(pLVar6,aLStack216);
    lib::L2CValue::_L2CValue(aLStack216);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack248 + 0x10),0x162d277af);
    lib::L2CValue::L2CValue(aLStack216,0);
    lib::L2CValue::operator_(pLVar6,aLStack216);
    lib::L2CValue::_L2CValue(aLStack216);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack248 + 0x10),0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack248 + 0x10),0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack248 + 0x10),0x162d277af);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack488,0xa854977fe);
    uVar4 = lib::L2CValue::as_integer(this_00);
    pfVar12 = (float *)app::sv_battle_object::pos(uVar4);
    lib::L2CValue::L2CValue(aLStack216,*pfVar12);
    lib::L2CValue::L2CValue(aLStack200,pfVar12[1]);
    lib::L2CValue::L2CValue(aLStack184,pfVar12[2]);
    lib::L2CValue::operator_(pLVar6,aLStack216);
    lib::L2CValue::operator_(pLVar10,aLStack200);
    lib::L2CValue::operator_(pLVar11,aLStack184);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack216);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack248 + 0x10),0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,pLVar10);
    lib::L2CValue::L2CValue(aLStack264,BATTLE_OBJECT_CATEGORY_INVALID);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack488,0xa854977fe);
    uVar4 = lib::L2CValue::as_integer(pLVar6);
    bVar1 = app::sv_battle_object::is_null(uVar4);
    lib::L2CValue::L2CValue(aLStack280,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack216,false);
    uVar7 = lib::L2CValue::operator__(aLStack280,aLStack216);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack280);
    if ((uVar7 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack488,0xa854977fe);
      uVar4 = lib::L2CValue::as_integer(pLVar6);
      uVar4 = app::sv_battle_object::category(uVar4);
      lib::L2CValue::L2CValue(aLStack216,uVar4 & 0xff);
      lib::L2CValue::operator_(aLStack264,aLStack216);
      lib::L2CValue::_L2CValue(aLStack216);
    }
    lib::L2CValue::L2CValue(aLStack216,_BATTLE_OBJECT_CATEGORY_FIGHTER);
    pLVar6 = aLStack216;
    uVar7 = lib::L2CValue::operator__(aLStack264,pLVar6);
    lib::L2CValue::_L2CValue(aLStack216);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack216,_BATTLE_OBJECT_CATEGORY_ITEM);
      pLVar6 = aLStack216;
      uVar7 = lib::L2CValue::operator__(aLStack264,pLVar6);
      lib::L2CValue::_L2CValue(aLStack216);
      if ((uVar7 & 1) != 0) goto LAB_7100011c24;
      lib::L2CValue::L2CValue(aLStack216,BATTLE_OBJECT_CATEGORY_WEAPON);
      pLVar6 = aLStack216;
      uVar7 = lib::L2CValue::operator__(aLStack264,pLVar6);
      lib::L2CValue::_L2CValue(aLStack216);
      if ((uVar7 & 1) != 0) goto LAB_7100011c24;
      lib::L2CValue::L2CValue(aLStack216,_BATTLE_OBJECT_CATEGORY_ENEMY);
      pLVar6 = aLStack216;
      uVar7 = lib::L2CValue::operator__(aLStack264,pLVar6);
      lib::L2CValue::_L2CValue(aLStack216);
      if ((uVar7 & 1) != 0) goto LAB_7100011c24;
    }
    else {
LAB_7100011c24:
      lib::L2CAgent::math_abs((L2CAgent *)auStack248,pLVar6);
      lib::L2CValue::L2CValue(aLStack312,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack328,0x1ffb406efa);
      uVar7 = lib::L2CValue::as_integer(aLStack312);
      uVar8 = lib::L2CValue::as_integer(aLStack328);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack296,fVar15);
      fVar15 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack344,fVar15);
      lib::L2CValue::operator_(aLStack296,aLStack344);
      uVar7 = lib::L2CValue::operator__(aLStack216,aLStack280);
      lib::L2CValue::_L2CValue(aLStack280);
      lib::L2CValue::_L2CValue(aLStack344);
      lib::L2CValue::_L2CValue(aLStack296);
      lib::L2CValue::_L2CValue(aLStack328);
      lib::L2CValue::_L2CValue(aLStack312);
      lib::L2CValue::_L2CValue(aLStack216);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack216,0);
        lib::L2CValue::L2CValue(aLStack280,_FIGHTER_STATUS_ATTACK_WORK_INT_100_HIT_NEAR_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack216);
        iVar5 = lib::L2CValue::as_integer(aLStack280);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
        lib::L2CValue::_L2CValue(aLStack280);
        lib::L2CValue::_L2CValue(aLStack216);
        lib::L2CValue::L2CValue(aLStack216,0);
        lib::L2CValue::L2CValue
                  (aLStack280,FIGHTER_STATUS_ATTACK_WORK_INT_100_HIT_NEAR_COUNT_CLIFF_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack216);
        iVar5 = lib::L2CValue::as_integer(aLStack280);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
        lib::L2CValue::_L2CValue(aLStack280);
        pLVar6 = aLStack216;
      }
      else {
        lib::L2CValue::L2CValue(aLStack280,_FIGHTER_STATUS_ATTACK_WORK_INT_100_HIT_NEAR_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack280);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack216,iVar3);
        uVar7 = lib::L2CValue::operator__(aLStack152,aLStack216);
        lib::L2CValue::_L2CValue(aLStack216);
        lib::L2CValue::_L2CValue(aLStack280);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack216,_FIGHTER_STATUS_ATTACK_WORK_INT_100_HIT_NEAR_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack216);
          app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack280,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack296,0x1c55181165);
          uVar7 = lib::L2CValue::as_integer(aLStack280);
          uVar8 = lib::L2CValue::as_integer(aLStack296);
          fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar7,uVar8);
          lib::L2CValue::L2CValue(aLStack216,fVar15);
          lib::L2CValue::_L2CValue(aLStack296);
          lib::L2CValue::_L2CValue(aLStack280);
          lib::L2CValue::L2CValue(aLStack280,FIGHTER_INSTANCE_WORK_ID_FLOAT_REBOUND_ATTACK_SPEED);
          fVar15 = (float)lib::L2CValue::as_number(aLStack216);
          iVar3 = lib::L2CValue::as_integer(aLStack280);
          app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar3);
          lib::L2CValue::_L2CValue(aLStack280);
        }
        lib::L2CValue::_L2CValue(aLStack216);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack488,0xa854977fe);
        uVar4 = lib::L2CValue::as_integer(pLVar6);
        bVar1 = app::sv_battle_object::is_null(uVar4);
        lib::L2CValue::L2CValue(aLStack280,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack216,false);
        uVar7 = lib::L2CValue::operator__(aLStack280,aLStack216);
        lib::L2CValue::_L2CValue(aLStack216);
        if ((uVar7 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack488,0xa854977fe);
          uVar4 = lib::L2CValue::as_integer(pLVar6);
          bVar1 = app::sv_battle_object::is_active(uVar4);
          lib::L2CValue::L2CValue(aLStack216,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack216);
          lib::L2CValue::_L2CValue(aLStack216);
          lib::L2CValue::_L2CValue(aLStack280);
          if ((bVar2 & 1U) == 0) goto LAB_71000122a8;
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack488,0xa854977fe);
          uVar4 = lib::L2CValue::as_integer(pLVar6);
          pvVar13 = (void *)app::sv_battle_object::module_accessor(uVar4);
          if (pvVar13 == (void *)0x0) {
            lib::L2CValue::L2CValue
                      (aLStack280,
                       (L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS);
          }
          else {
            lib::L2CValue::L2CValue(aLStack280,pvVar13);
          }
          lib::L2CValue::L2CValue(aLStack296,false);
          pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack280);
          iVar3 = app::lua_bind::StatusModule__situation_kind_impl(pBVar14);
          lib::L2CValue::L2CValue(aLStack312,iVar3);
          lib::L2CValue::L2CValue(aLStack216,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(aLStack312,aLStack216);
          lib::L2CValue::_L2CValue(aLStack216);
          lib::L2CValue::_L2CValue(aLStack312);
          if ((uVar7 & 1) != 0) {
            fVar15 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack344,fVar15);
            lib::L2CValue::operator_(aLStack344);
            fVar15 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack376,fVar15);
            lib::L2CValue::L2CValue(aLStack216,1.0);
            lib::L2CValue::operator_(aLStack216,aLStack376);
            lib::L2CValue::_L2CValue(aLStack216);
            fVar15 = (float)lib::L2CValue::as_number(aLStack328);
            fVar16 = (float)lib::L2CValue::as_number(aLStack360);
            bVar1 = app::lua_bind::GroundModule__is_ottotto_lr_impl
                              (this->moduleAccessor,fVar15,fVar16);
            lib::L2CValue::L2CValue(aLStack312,(bool)(bVar1 & 1));
            lib::L2CValue::_L2CValue(aLStack360);
            lib::L2CValue::_L2CValue(aLStack376);
            lib::L2CValue::_L2CValue(aLStack328);
            lib::L2CValue::_L2CValue(aLStack344);
            lib::L2CValue::L2CValue(aLStack360,-1.0);
            fVar15 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack392,fVar15);
            lib::L2CValue::L2CValue(aLStack216,1.0);
            lib::L2CValue::operator_(aLStack216,aLStack392);
            lib::L2CValue::_L2CValue(aLStack216);
            fVar15 = (float)lib::L2CValue::as_number(aLStack360);
            fVar16 = (float)lib::L2CValue::as_number(aLStack376);
            pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack280);
            bVar1 = app::lua_bind::GroundModule__is_ottotto_lr_impl(pBVar14,fVar15,fVar16);
            lib::L2CValue::L2CValue(aLStack344,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack344);
            bVar2 = (bVar2 & 1U) == 0;
            if (bVar2) {
              lib::L2CValue::L2CValue(aLStack424,1.0);
              fVar15 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack456,fVar15);
              lib::L2CValue::L2CValue(aLStack216,1.0);
              lib::L2CValue::operator_(aLStack216,aLStack456);
              lib::L2CValue::_L2CValue(aLStack216);
              fVar15 = (float)lib::L2CValue::as_number(aLStack424);
              fVar16 = (float)lib::L2CValue::as_number(aLStack440);
              pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack280);
              bVar1 = app::lua_bind::GroundModule__is_ottotto_lr_impl(pBVar14,fVar15,fVar16);
              lib::L2CValue::L2CValue(aLStack408,(bool)(bVar1 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack408);
            }
            else {
              bVar1 = 1;
            }
            lib::L2CValue::L2CValue(aLStack328,(bool)(bVar1 & 1));
            if (bVar2) {
              lib::L2CValue::_L2CValue(aLStack408);
              lib::L2CValue::_L2CValue(aLStack440);
              lib::L2CValue::_L2CValue(aLStack456);
              lib::L2CValue::_L2CValue(aLStack424);
            }
            lib::L2CValue::_L2CValue(aLStack344);
            lib::L2CValue::_L2CValue(aLStack376);
            lib::L2CValue::_L2CValue(aLStack392);
            lib::L2CValue::_L2CValue(aLStack360);
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack312);
            if (((bVar2 & 1U) != 0) &&
               (bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack328), (bVar2 & 1U) != 0)) {
              lib::L2CValue::L2CValue(aLStack216,true);
              lib::L2CValue::operator_(aLStack296,aLStack216);
              lib::L2CValue::_L2CValue(aLStack216);
            }
            lib::L2CValue::_L2CValue(aLStack328);
            lib::L2CValue::_L2CValue(aLStack312);
          }
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack296);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack312,_GROUND_TOUCH_FLAG_SIDE);
            uVar4 = lib::L2CValue::as_integer(aLStack312);
            pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack280);
            bVar1 = app::lua_bind::GroundModule__is_touch_impl(pBVar14,uVar4);
            lib::L2CValue::L2CValue(aLStack216,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack216);
            lib::L2CValue::_L2CValue(aLStack216);
            lib::L2CValue::_L2CValue(aLStack312);
            if ((bVar2 & 1U) != 0) goto LAB_7100012270;
          }
          else {
LAB_7100012270:
            lib::L2CValue::L2CValue
                      (aLStack216,FIGHTER_STATUS_ATTACK_WORK_INT_100_HIT_NEAR_COUNT_CLIFF_STOP);
            iVar3 = lib::L2CValue::as_integer(aLStack216);
            app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue(aLStack216);
          }
          lib::L2CValue::_L2CValue(aLStack296);
        }
        pLVar6 = aLStack280;
      }
      lib::L2CValue::_L2CValue(pLVar6);
    }
LAB_71000122a8:
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue((L2CValue *)auStack248);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack248 + 0x10));
    lib::L2CValue::_L2CValue(aLStack168);
  }
  lib::L2CValue::_L2CValue(aLStack152);
LAB_71000122d0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack488);
  lib::L2CValue::_L2CValue(aLStack472);
  return;
}

