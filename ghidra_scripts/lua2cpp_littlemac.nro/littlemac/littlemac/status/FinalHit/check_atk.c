
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLittlemac::status::FinalHit_check_atk(L2CFighterLittlemac *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  void *pvVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *pLVar9;
  float *pfVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CValue *in_x1;
  L2CValue *in_x2;
  lua_State *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  L2CValue aLStack536 [16];
  L2CValue aLStack520 [16];
  L2CValue aLStack504 [16];
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
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [24];
  
  lib::L2CValue::L2CValue(aLStack520,in_x1);
  lib::L2CValue::L2CValue(aLStack536,in_x2);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack536,0x10860c2250);
  lib::L2CValue::L2CValue(aLStack296,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack296);
  lib::L2CValue::_L2CValue(aLStack296);
  if ((uVar5 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack536,0x5d6e20d24);
    lib::L2CValue::L2CValue(aLStack296,COLLISION_KIND_HIT);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack296);
    lib::L2CValue::_L2CValue(aLStack296);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack296,_FIGHTER_LITTLEMAC_STATUS_FINAL_WORK_INT_ATTACK_HIT_NUM);
      iVar1 = lib::L2CValue::as_integer(aLStack296);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack168,iVar1);
      lib::L2CValue::_L2CValue(aLStack296);
      lib::L2CValue::L2CValue(aLStack296,_FIGHTER_LITTLEMAC_FINAL_TARGET_NUM);
      uVar5 = lib::L2CValue::operator_(aLStack168,aLStack296);
      lib::L2CValue::_L2CValue(aLStack296);
      if ((uVar5 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack536,0xa854977fe);
        uVar2 = lib::L2CValue::as_integer(pLVar4);
        pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar2);
        if (pvVar6 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack184,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack184,pvVar6);
        }
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack536,0x3a4b90435);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack536,0x6c2b55593);
        iVar1 = lib::L2CValue::as_integer(pLVar4);
        iVar3 = lib::L2CValue::as_integer(pLVar7);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack184);
        iVar1 = app::lua_bind::HitModule__get_status_impl(pBVar8,iVar1,iVar3);
        lib::L2CValue::L2CValue(aLStack200,iVar1);
        lib::L2CValue::L2CValue(aLStack296,_HIT_STATUS_NORMAL);
        uVar5 = lib::L2CValue::operator__(aLStack200,aLStack296);
        lib::L2CValue::_L2CValue(aLStack296);
        lib::L2CValue::_L2CValue(aLStack200);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack296,0);
          uVar5 = lib::L2CValue::operator__(aLStack168,aLStack296);
          lib::L2CValue::_L2CValue(aLStack296);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack216,0.0);
            lib::L2CValue::L2CValue(aLStack232,0.0);
            lib::L2CValue::L2CValue(aLStack248,0.0);
            lua2cpp::L2CFighterBase::Vector3__create
                      (this,(L2CValue)0x28,(L2CValue)0x18,(L2CValue)0x8);
            lib::L2CValue::_L2CValue(aLStack248);
            lib::L2CValue::_L2CValue(aLStack232);
            lib::L2CValue::_L2CValue(aLStack216);
            pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
            pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x162d277af);
            pfVar10 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack296,*pfVar10);
            lib::L2CValue::L2CValue(aLStack280,pfVar10[1]);
            lib::L2CValue::L2CValue(aLStack264,pfVar10[2]);
            lib::L2CValue::operator_(pLVar4,aLStack296);
            lib::L2CValue::operator_(pLVar7,aLStack280);
            lib::L2CValue::operator_(pLVar9,aLStack264);
            lib::L2CValue::_L2CValue(aLStack264);
            lib::L2CValue::_L2CValue(aLStack280);
            lib::L2CValue::_L2CValue(aLStack296);
            lib::L2CValue::L2CValue(aLStack328,0.0);
            lib::L2CValue::L2CValue(aLStack344,0.0);
            fVar15 = 0.0;
            lib::L2CValue::L2CValue(aLStack360,0.0);
            lua2cpp::L2CFighterBase::Vector3__create
                      (this,(L2CValue)0xb8,(L2CValue)0xa8,(L2CValue)0x98);
            lib::L2CValue::_L2CValue(aLStack360);
            lib::L2CValue::_L2CValue(aLStack344);
            lib::L2CValue::_L2CValue(aLStack328);
            pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x18cdc1683);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x1fbdb2615);
            pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x162d277af);
            lib::L2CValue::L2CValue(aLStack376,_STAGE_KIRIFUDA_KIND_IKE_1);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack376);
            plVar14 = this->luaStateAgent;
            iVar1 = lib::L2CValue::as_integer(aLStack376);
            uVar21 = app::sv_fighter_util::get_kirifuda_position(plVar14,iVar1);
            lib::L2CValue::L2CValue(aLStack296,(float)uVar21);
            lib::L2CValue::L2CValue(aLStack280,(float)((ulong)uVar21 >> 0x20));
            lib::L2CValue::L2CValue(aLStack264,fVar15);
            lib::L2CValue::operator_(pLVar4,aLStack296);
            lib::L2CValue::operator_(pLVar7,aLStack280);
            lib::L2CValue::operator_(pLVar9,aLStack264);
            lib::L2CValue::_L2CValue(aLStack264);
            lib::L2CValue::_L2CValue(aLStack280);
            lib::L2CValue::_L2CValue(aLStack296);
            lib::L2CValue::_L2CValue(aLStack376);
            lib::L2CValue::L2CValue(aLStack392,0.0);
            lib::L2CValue::L2CValue(aLStack408,0.0);
            fVar15 = 0.0;
            lib::L2CValue::L2CValue(aLStack424,0.0);
            lua2cpp::L2CFighterBase::Vector3__create
                      (this,(L2CValue)0x78,(L2CValue)0x68,(L2CValue)0x58);
            lib::L2CValue::_L2CValue(aLStack424);
            lib::L2CValue::_L2CValue(aLStack408);
            lib::L2CValue::_L2CValue(aLStack392);
            pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack376,0x18cdc1683);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack376,0x1fbdb2615);
            pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack376,0x162d277af);
            lib::L2CValue::L2CValue(aLStack440,_STAGE_KIRIFUDA_KIND_IKE_2);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack440);
            plVar14 = this->luaStateAgent;
            iVar1 = lib::L2CValue::as_integer(aLStack440);
            uVar21 = app::sv_fighter_util::get_kirifuda_position(plVar14,iVar1);
            lib::L2CValue::L2CValue(aLStack296,(float)uVar21);
            lib::L2CValue::L2CValue(aLStack280,(float)((ulong)uVar21 >> 0x20));
            lib::L2CValue::L2CValue(aLStack264,fVar15);
            lib::L2CValue::operator_(pLVar4,aLStack296);
            lib::L2CValue::operator_(pLVar7,aLStack280);
            lib::L2CValue::operator_(pLVar9,aLStack264);
            lib::L2CValue::_L2CValue(aLStack264);
            lib::L2CValue::_L2CValue(aLStack280);
            lib::L2CValue::_L2CValue(aLStack296);
            lib::L2CValue::_L2CValue(aLStack440);
            lib::L2CValue::L2CValue(aLStack440,0.0);
            lib::L2CValue::L2CValue(aLStack456,0.0);
            lib::L2CValue::L2CValue(aLStack472,0.0);
            lua2cpp::L2CFighterBase::Vector3__create
                      (this,(L2CValue)0x48,(L2CValue)0x38,(L2CValue)0x28);
            lib::L2CValue::_L2CValue(aLStack472);
            lib::L2CValue::_L2CValue(aLStack456);
            lib::L2CValue::_L2CValue(aLStack440);
            pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x18cdc1683);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x1fbdb2615);
            pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x162d277af);
            pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
            pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
            pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x162d277af);
            fVar15 = (float)lib::L2CValue::as_number(pLVar4);
            fVar16 = (float)lib::L2CValue::as_number(pLVar7);
            fVar17 = (float)lib::L2CValue::as_number(pLVar9);
            fVar18 = (float)lib::L2CValue::as_number(pLVar11);
            fVar19 = (float)lib::L2CValue::as_number(pLVar12);
            fVar20 = (float)lib::L2CValue::as_number(pLVar13);
            fVar15 = (float)app::sv_math::vec3_distance(fVar15,fVar16,fVar17,fVar18,fVar19,fVar20);
            lib::L2CValue::L2CValue(aLStack488,fVar15);
            pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack376,0x18cdc1683);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack376,0x1fbdb2615);
            pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack376,0x162d277af);
            pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
            pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
            pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x162d277af);
            fVar15 = (float)lib::L2CValue::as_number(pLVar4);
            fVar16 = (float)lib::L2CValue::as_number(pLVar7);
            fVar17 = (float)lib::L2CValue::as_number(pLVar9);
            fVar18 = (float)lib::L2CValue::as_number(pLVar11);
            fVar19 = (float)lib::L2CValue::as_number(pLVar12);
            fVar20 = (float)lib::L2CValue::as_number(pLVar13);
            fVar15 = (float)app::sv_math::vec3_distance(fVar15,fVar16,fVar17,fVar18,fVar19,fVar20);
            lib::L2CValue::L2CValue(aLStack504,fVar15);
            uVar5 = lib::L2CValue::operator_(aLStack488,aLStack504);
            lib::L2CValue::_L2CValue(aLStack504);
            lib::L2CValue::_L2CValue(aLStack488);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::operator_(aLStack296,aLStack376);
            }
            else {
              lib::L2CValue::operator_(aLStack296,aLStack312);
            }
            pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack296,0x18cdc1683);
            lib::L2CValue::L2CValue
                      (aLStack488,_FIGHTER_LITTLEMAC_STATUS_FINAL_WORK_FLOAT_ATTACK_TARGET_BASE_X);
            fVar15 = (float)lib::L2CValue::as_number(pLVar4);
            iVar1 = lib::L2CValue::as_integer(aLStack488);
            app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar1);
            lib::L2CValue::_L2CValue(aLStack488);
            pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack296,0x1fbdb2615);
            lib::L2CValue::L2CValue
                      (aLStack488,_FIGHTER_LITTLEMAC_STATUS_FINAL_WORK_FLOAT_ATTACK_TARGET_BASE_Y);
            fVar15 = (float)lib::L2CValue::as_number(pLVar4);
            iVar1 = lib::L2CValue::as_integer(aLStack488);
            app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar1);
            lib::L2CValue::_L2CValue(aLStack488);
            lib::L2CValue::_L2CValue(aLStack296);
            lib::L2CValue::_L2CValue(aLStack376);
            lib::L2CValue::_L2CValue(aLStack312);
            lib::L2CValue::_L2CValue(aLStack200);
          }
          pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack536,0xa854977fe);
          lib::L2CValue::L2CValue
                    (aLStack296,_FIGHTER_LITTLEMAC_STATUS_FINAL_WORK_INT_ATTACK_HIT_OBJECT_ID);
          lib::L2CValue::operator_(aLStack296,aLStack168);
          lib::L2CValue::_L2CValue(aLStack296);
          iVar1 = lib::L2CValue::as_integer(pLVar4);
          iVar3 = lib::L2CValue::as_integer(aLStack200);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
          lib::L2CValue::_L2CValue(aLStack200);
          lib::L2CValue::L2CValue
                    (aLStack296,_FIGHTER_LITTLEMAC_STATUS_FINAL_WORK_INT_ATTACK_HIT_NUM);
          iVar1 = lib::L2CValue::as_integer(aLStack296);
          app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar1);
          lib::L2CValue::_L2CValue(aLStack296);
        }
        lib::L2CValue::_L2CValue(aLStack184);
      }
      lib::L2CValue::_L2CValue(aLStack168);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack536);
  lib::L2CValue::_L2CValue(aLStack520);
  return;
}

