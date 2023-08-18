
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::FinalHitWait_check_atk
          (L2CFighterMetaknight *this,L2CValue *return_value)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  void *pvVar9;
  BattleObjectModuleAccessor *pBVar10;
  L2CValue *this_00;
  FighterModuleAccessor *pFVar11;
  L2CValue *in_x1;
  L2CValue *in_x2;
  float fVar12;
  undefined8 uVar13;
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack296,in_x1);
  lib::L2CValue::L2CValue(aLStack312,in_x2);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0xa854977fe);
  uVar1 = lib::L2CValue::as_integer(pLVar5);
  uVar1 = app::sv_battle_object::category(uVar1);
  lib::L2CValue::L2CValue(aLStack136,uVar1 & 0xff);
  lib::L2CValue::L2CValue(aLStack264,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar6 = lib::L2CValue::operator__(aLStack136,aLStack264);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x5d6e20d24);
    lib::L2CValue::L2CValue(aLStack264,COLLISION_KIND_HIT);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack264);
    lib::L2CValue::_L2CValue(aLStack264);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x3a4b90435);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x6c2b55593);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0xa854977fe);
      uVar1 = lib::L2CValue::as_integer(pLVar8);
      pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar1);
      if (pvVar9 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack152,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack152,pvVar9);
      }
      iVar2 = lib::L2CValue::as_integer(pLVar5);
      iVar3 = lib::L2CValue::as_integer(pLVar7);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack152);
      iVar2 = app::lua_bind::HitModule__get_status_impl(pBVar10,iVar2,iVar3);
      lib::L2CValue::L2CValue(aLStack136,iVar2);
      lib::L2CValue::L2CValue(aLStack264,_HIT_STATUS_NORMAL);
      uVar6 = lib::L2CValue::operator__(aLStack136,aLStack264);
      lib::L2CValue::_L2CValue(aLStack264);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack152);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack264,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_FINAL_HIT_SUM);
        iVar2 = lib::L2CValue::as_integer(aLStack264);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack136,iVar2);
        lib::L2CValue::_L2CValue(aLStack264);
        iVar2 = lib::L2CValue::as_integer(aLStack136);
        if (-1 < iVar2) {
          iVar3 = -1;
          do {
            lib::L2CValue::L2CValue
                      (aLStack152,
                       iVar3 + _FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_TARGET_ID_START + 1);
            iVar4 = lib::L2CValue::as_integer(aLStack152);
            iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
            lib::L2CValue::L2CValue(aLStack264,iVar4);
            lib::L2CValue::_L2CValue(aLStack152);
            pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0xa854977fe);
            uVar6 = lib::L2CValue::operator__(aLStack264,pLVar5);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              pLVar5 = aLStack264;
              goto LAB_7100002830;
            }
            lib::L2CValue::_L2CValue(aLStack264);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar2);
        }
        lib::L2CValue::L2CValue(aLStack264,_FIGHTER_METAKNIGHT_STATUS_FINAL_FLAG_ATTACK_HIT);
        iVar2 = lib::L2CValue::as_integer(aLStack264);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack264);
        lib::L2CValue::L2CValue(aLStack264,_FIGHTER_METAKNIGHT_STATUS_FINAL_FLAG_ATTACK_HIT_LINK);
        iVar2 = lib::L2CValue::as_integer(aLStack264);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack264);
        lib::L2CValue::L2CValue(aLStack264,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_FINAL_HIT_NUM);
        iVar2 = lib::L2CValue::as_integer(aLStack264);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack152,iVar2);
        lib::L2CValue::_L2CValue(aLStack264);
        lib::L2CValue::L2CValue(aLStack264,0);
        uVar6 = lib::L2CValue::operator__(aLStack136,aLStack264);
        lib::L2CValue::_L2CValue(aLStack264);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack264,0);
          uVar6 = lib::L2CValue::operator__(aLStack152,aLStack264);
          lib::L2CValue::_L2CValue(aLStack264);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack184,0.0);
            lib::L2CValue::L2CValue(aLStack200,0.0);
            fVar12 = 0.0;
            lib::L2CValue::L2CValue(aLStack216,0.0);
            lua2cpp::L2CFighterBase::Vector3__create
                      (this,(L2CValue)0x48,(L2CValue)0x38,(L2CValue)0x28);
            lib::L2CValue::_L2CValue(aLStack216);
            lib::L2CValue::_L2CValue(aLStack200);
            lib::L2CValue::_L2CValue(aLStack184);
            pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x18cdc1683);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x1fbdb2615);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x162d277af);
            this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
            pFVar11 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this_00);
            uVar13 = app::FighterSpecializer_Metaknight::get_final_target_pos_base(pFVar11);
            lib::L2CValue::L2CValue(aLStack264,(float)uVar13);
            lib::L2CValue::L2CValue(aLStack248,(float)((ulong)uVar13 >> 0x20));
            lib::L2CValue::L2CValue(aLStack232,fVar12);
            lib::L2CValue::operator_(pLVar5,aLStack264);
            lib::L2CValue::operator_(pLVar7,aLStack248);
            lib::L2CValue::operator_(pLVar8,aLStack232);
            lib::L2CValue::_L2CValue(aLStack232);
            lib::L2CValue::_L2CValue(aLStack248);
            lib::L2CValue::_L2CValue(aLStack264);
            pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x18cdc1683);
            lib::L2CValue::L2CValue
                      (aLStack264,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_FLOAT_TARGET_BASE_POS_X);
            fVar12 = (float)lib::L2CValue::as_number(pLVar5);
            iVar2 = lib::L2CValue::as_integer(aLStack264);
            app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar2);
            lib::L2CValue::_L2CValue(aLStack264);
            pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack168,0x1fbdb2615);
            lib::L2CValue::L2CValue
                      (aLStack264,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_FLOAT_TARGET_BASE_POS_Y);
            fVar12 = (float)lib::L2CValue::as_number(pLVar5);
            iVar2 = lib::L2CValue::as_integer(aLStack264);
            app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar2);
            lib::L2CValue::_L2CValue(aLStack264);
            lib::L2CValue::_L2CValue(aLStack168);
          }
        }
        lib::L2CValue::operator_(aLStack136,aLStack152);
        lib::L2CValue::L2CValue(aLStack264,_FIGHTER_METAKNIGHT_FINAL_TARGET_NUM_MAX);
        uVar6 = lib::L2CValue::operator_(aLStack168,aLStack264);
        lib::L2CValue::_L2CValue(aLStack264);
        lib::L2CValue::_L2CValue(aLStack168);
        if ((uVar6 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0xa854977fe);
          iVar2 = _FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_TARGET_ID_START;
          lib::L2CValue::operator_(aLStack136,aLStack152);
          lib::L2CValue::L2CValue(aLStack264,iVar2);
          lib::L2CValue::operator_(aLStack264,aLStack280);
          lib::L2CValue::_L2CValue(aLStack264);
          iVar2 = lib::L2CValue::as_integer(pLVar5);
          iVar3 = lib::L2CValue::as_integer(aLStack168);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
          lib::L2CValue::_L2CValue(aLStack168);
          lib::L2CValue::_L2CValue(aLStack280);
          lib::L2CValue::L2CValue(aLStack264,1);
          lib::L2CValue::L2CValue
                    (aLStack168,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_FINAL_HIT_NUM);
          iVar2 = lib::L2CValue::as_integer(aLStack264);
          iVar3 = lib::L2CValue::as_integer(aLStack168);
          app::lua_bind::WorkModule__add_int_impl(this->moduleAccessor,iVar2,iVar3);
          lib::L2CValue::_L2CValue(aLStack168);
          lib::L2CValue::_L2CValue(aLStack264);
        }
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        pLVar5 = aLStack152;
LAB_7100002830:
        lib::L2CValue::_L2CValue(pLVar5);
        lib::L2CValue::_L2CValue(aLStack136);
      }
    }
  }
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack296);
  return;
}

