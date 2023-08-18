
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNana::status::SpecialLw_on_change_lr(L2CFighterNana *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *in_x1;
  L2CValue *in_x2;
  float fVar8;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack176,in_x1);
  lib::L2CValue::L2CValue(aLStack192,in_x2);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_STATUS_SPECIAL_LW_FLAG_COUPLE_NANA);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_INSTANCE_WORK_ID_INT_PARTNER_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack80,(L2CValue *)&FIGHTER_STATUS_AIR_LASSO_REWIND_WORK_FLOAT_UP_Z);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar6);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
LAB_710000a6b8:
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        goto LAB_710000a6b8;
      }
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_POPO_INSTANCE_WORK_ID_INT_PARTNER_OBJECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::sv_battle_object::is_null(uVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack128);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
        fVar8 = (float)app::lua_bind::PostureModule__lr_impl(pBVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        lib::L2CValue::operator_(aLStack96);
        fVar8 = (float)lib::L2CValue::as_number(aLStack64);
        app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar8);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
        app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue((L2CValue *)return_value,false);
        lib::L2CValue::_L2CValue(aLStack80);
        goto LAB_710000a6d4;
      }
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,true);
LAB_710000a6d4:
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

