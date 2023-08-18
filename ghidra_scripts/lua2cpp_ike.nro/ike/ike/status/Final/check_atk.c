
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterIke::status::FinalEnd_check_atk(L2CFighterIke *this,L2CValue *return_value)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *this_00;
  FighterModuleAccessor *pFVar10;
  L2CValue *in_x1;
  L2CValue *in_x2;
  float fVar11;
  undefined8 uVar12;
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
  
  lib::L2CValue::L2CValue(aLStack280,in_x1);
  lib::L2CValue::L2CValue(aLStack296,in_x2);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack296,0xa854977fe);
  uVar1 = lib::L2CValue::as_integer(pLVar4);
  uVar1 = app::sv_battle_object::category(uVar1);
  lib::L2CValue::L2CValue(aLStack136,uVar1 & 0xff);
  lib::L2CValue::L2CValue(aLStack232,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar5 = lib::L2CValue::operator__(aLStack136,aLStack232);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((uVar5 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack296,0x5d6e20d24);
    lib::L2CValue::L2CValue(aLStack232,COLLISION_KIND_HIT);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack232);
    lib::L2CValue::_L2CValue(aLStack232);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack296,0x3a4b90435);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack296,0x6c2b55593);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack296,0xa854977fe);
      uVar1 = lib::L2CValue::as_integer(pLVar7);
      pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar1);
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack152,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack152,pvVar8);
      }
      iVar2 = lib::L2CValue::as_integer(pLVar4);
      iVar3 = lib::L2CValue::as_integer(pLVar6);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack152);
      iVar2 = app::lua_bind::HitModule__get_status_impl(pBVar9,iVar2,iVar3);
      lib::L2CValue::L2CValue(aLStack136,iVar2);
      lib::L2CValue::L2CValue(aLStack232,_HIT_STATUS_NORMAL);
      uVar5 = lib::L2CValue::operator__(aLStack136,aLStack232);
      lib::L2CValue::_L2CValue(aLStack232);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack152);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack232,_FIGHTER_IKE_STATUS_FINAL_FLAG_ATTACK_HIT);
        iVar2 = lib::L2CValue::as_integer(aLStack232);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack232);
        lib::L2CValue::L2CValue(aLStack232,_FIGHTER_IKE_INSTANCE_WORK_ID_FLAG_FINAL_ATTACK_HIT_LINK)
        ;
        iVar2 = lib::L2CValue::as_integer(aLStack232);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack232);
        lib::L2CValue::L2CValue(aLStack152,_FIGHTER_IKE_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM);
        iVar2 = lib::L2CValue::as_integer(aLStack152);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack136,iVar2);
        lib::L2CValue::L2CValue(aLStack232,0);
        uVar5 = lib::L2CValue::operator__(aLStack136,aLStack232);
        lib::L2CValue::_L2CValue(aLStack232);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::_L2CValue(aLStack152);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack152,0.0);
          lib::L2CValue::L2CValue(aLStack168,0.0);
          fVar11 = 0.0;
          lib::L2CValue::L2CValue(aLStack184,0.0);
          lua2cpp::L2CFighterBase::Vector3__create
                    (this,(L2CValue)0x68,(L2CValue)0x58,(L2CValue)0x48);
          lib::L2CValue::_L2CValue(aLStack184);
          lib::L2CValue::_L2CValue(aLStack168);
          lib::L2CValue::_L2CValue(aLStack152);
          pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x162d277af);
          this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          pFVar10 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this_00);
          uVar12 = app::FighterSpecializer_Ike::get_final_target_pos_base(pFVar10);
          lib::L2CValue::L2CValue(aLStack232,(float)uVar12);
          lib::L2CValue::L2CValue(aLStack216,(float)((ulong)uVar12 >> 0x20));
          lib::L2CValue::L2CValue(aLStack200,fVar11);
          lib::L2CValue::operator_(pLVar4,aLStack232);
          lib::L2CValue::operator_(pLVar6,aLStack216);
          lib::L2CValue::operator_(pLVar7,aLStack200);
          lib::L2CValue::_L2CValue(aLStack200);
          lib::L2CValue::_L2CValue(aLStack216);
          lib::L2CValue::_L2CValue(aLStack232);
          pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
          lib::L2CValue::L2CValue(aLStack232,_FIGHTER_IKE_STATUS_FINAL_WORK_FLOAT_TARGET_BASE_POS_X)
          ;
          fVar11 = (float)lib::L2CValue::as_number(pLVar4);
          iVar2 = lib::L2CValue::as_integer(aLStack232);
          app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar2);
          lib::L2CValue::_L2CValue(aLStack232);
          pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack232,_FIGHTER_IKE_STATUS_FINAL_WORK_FLOAT_TARGET_BASE_POS_Y)
          ;
          fVar11 = (float)lib::L2CValue::as_number(pLVar4);
          iVar2 = lib::L2CValue::as_integer(aLStack232);
          app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar2);
          lib::L2CValue::_L2CValue(aLStack232);
          lib::L2CValue::_L2CValue(aLStack136);
        }
        lib::L2CValue::L2CValue(aLStack248,_FIGHTER_IKE_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM);
        iVar2 = lib::L2CValue::as_integer(aLStack248);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack136,iVar2);
        lib::L2CValue::L2CValue(aLStack232,_FIGHTER_IKE_FINAL_TARGET_NUM_MAX);
        uVar5 = lib::L2CValue::operator_(aLStack136,aLStack232);
        lib::L2CValue::_L2CValue(aLStack232);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::_L2CValue(aLStack248);
        if ((uVar5 & 1) != 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack296,0xa854977fe);
          iVar2 = _FIGHTER_IKE_STATUS_FINAL_WORK_INT_TASK_ID1;
          lib::L2CValue::L2CValue(aLStack264,_FIGHTER_IKE_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM);
          iVar3 = lib::L2CValue::as_integer(aLStack264);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack248,iVar3);
          lib::L2CValue::L2CValue(aLStack232,iVar2);
          lib::L2CValue::operator_(aLStack232,aLStack248);
          lib::L2CValue::_L2CValue(aLStack232);
          iVar2 = lib::L2CValue::as_integer(pLVar4);
          iVar3 = lib::L2CValue::as_integer(aLStack136);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
          lib::L2CValue::_L2CValue(aLStack136);
          lib::L2CValue::_L2CValue(aLStack248);
          lib::L2CValue::_L2CValue(aLStack264);
          lib::L2CValue::L2CValue(aLStack232,1);
          lib::L2CValue::L2CValue(aLStack136,_FIGHTER_IKE_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM);
          iVar2 = lib::L2CValue::as_integer(aLStack232);
          iVar3 = lib::L2CValue::as_integer(aLStack136);
          app::lua_bind::WorkModule__add_int_impl(this->moduleAccessor,iVar2,iVar3);
          lib::L2CValue::_L2CValue(aLStack136);
          lib::L2CValue::_L2CValue(aLStack232);
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  return;
}

