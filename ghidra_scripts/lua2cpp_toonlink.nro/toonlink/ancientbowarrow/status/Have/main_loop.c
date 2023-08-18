
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponToonlinkAncientbowarrow::status::Have_main_loop
          (L2CWeaponToonlinkAncientbowarrow *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *this_00;
  float fVar8;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = aLStack96;
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710000385c;
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack64);
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar8);
    lib::L2CValue::_L2CValue(aLStack96);
    this_00 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_710000385c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

