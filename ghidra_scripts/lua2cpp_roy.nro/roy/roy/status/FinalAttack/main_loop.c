
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRoy::status::FinalAttack_main_loop(L2CFighterRoy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  float *pfVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  L2CValue *this_05;
  ulong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
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
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack280,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack280);
  lib::L2CValue::_L2CValue(aLStack280);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack344,_FIGHTER_ROY_STATUS_FINAL_FLAG_SET_CAMERA_TARGET);
    iVar3 = lib::L2CValue::as_integer(aLStack344);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack280,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack280);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack344);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack280,_FIGHTER_ROY_STATUS_FINAL_FLAG_SET_CAMERA_TARGET);
      iVar3 = lib::L2CValue::as_integer(aLStack280);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack280);
      lib::L2CValue::L2CValue(aLStack280,_FIGHTER_ROY_STATUS_FINAL_WORK_INT_TARGET_SUM);
      iVar3 = lib::L2CValue::as_integer(aLStack280);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack168,iVar3);
      lib::L2CValue::_L2CValue(aLStack280);
      lib::L2CValue::L2CValue(aLStack184,0.0);
      lib::L2CValue::L2CValue(aLStack280,1);
      lib::L2CValue::operator_(aLStack168,aLStack280);
      lib::L2CValue::_L2CValue(aLStack280);
      iVar3 = lib::L2CValue::as_integer(aLStack344);
      lib::L2CValue::_L2CValue(aLStack344);
      if (-1 < iVar3) {
        iVar11 = -1;
        do {
          lib::L2CValue::L2CValue
                    (aLStack216,iVar11 + _FIGHTER_ROY_STATUS_FINAL_WORK_INT_TARGET_ID + 1);
          iVar4 = lib::L2CValue::as_integer(aLStack216);
          iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::L2CValue(aLStack200,iVar4);
          lib::L2CValue::_L2CValue(aLStack216);
          uVar5 = lib::L2CValue::as_integer(aLStack200);
          pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar5);
          if (pvVar7 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack216,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack216,pvVar7);
          }
          pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack280,*pfVar8);
          lib::L2CValue::L2CValue(aLStack264,pfVar8[1]);
          lib::L2CValue::L2CValue(aLStack248,pfVar8[2]);
          FUN_710001f120(aLStack232,this,aLStack280);
          lib::L2CValue::_L2CValue(aLStack248);
          lib::L2CValue::_L2CValue(aLStack264);
          lib::L2CValue::_L2CValue(aLStack280);
          pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack216);
          pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar9);
          lib::L2CValue::L2CValue(aLStack344,*pfVar8);
          lib::L2CValue::L2CValue(aLStack328,pfVar8[1]);
          lib::L2CValue::L2CValue(aLStack312,pfVar8[2]);
          FUN_710001f120(aLStack296,this,aLStack344);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::_L2CValue(aLStack328);
          lib::L2CValue::_L2CValue(aLStack344);
          this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0x18cdc1683);
          this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0x1fbdb2615);
          this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0x162d277af);
          this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack296,0x18cdc1683);
          this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack296,0x1fbdb2615);
          this_05 = (L2CValue *)lib::L2CValue::operator__(aLStack296,0x162d277af);
          fVar12 = (float)lib::L2CValue::as_number(this_00);
          fVar13 = (float)lib::L2CValue::as_number(this_01);
          fVar14 = (float)lib::L2CValue::as_number(this_02);
          fVar15 = (float)lib::L2CValue::as_number(this_03);
          fVar16 = (float)lib::L2CValue::as_number(this_04);
          fVar17 = (float)lib::L2CValue::as_number(this_05);
          fVar12 = (float)app::sv_math::vec3_distance(fVar12,fVar13,fVar14,fVar15,fVar16,fVar17);
          lib::L2CValue::L2CValue(aLStack360,fVar12);
          uVar10 = lib::L2CValue::operator_(aLStack184,aLStack360);
          if ((uVar10 & 1) != 0) {
            lib::L2CValue::operator_(aLStack184,aLStack360);
            lib::L2CValue::L2CValue(aLStack376,_FIGHTER_ROY_STATUS_FINAL_WORK_INT_CAMERA_TARGET_ID);
            iVar4 = lib::L2CValue::as_integer(aLStack200);
            iVar6 = lib::L2CValue::as_integer(aLStack376);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
            lib::L2CValue::_L2CValue(aLStack376);
          }
          lib::L2CValue::_L2CValue(aLStack360);
          lib::L2CValue::_L2CValue(aLStack296);
          lib::L2CValue::_L2CValue(aLStack232);
          lib::L2CValue::_L2CValue(aLStack216);
          lib::L2CValue::_L2CValue(aLStack200);
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar3);
      }
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::_L2CValue(aLStack168);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack280,_FIGHTER_ROY_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack344,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe8,(L2CValue)0xa8);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack280);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

