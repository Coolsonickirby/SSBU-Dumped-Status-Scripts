
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlaredummy::status::Fly_exec(L2CWeaponEdgeFlaredummy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  BattleObjectModuleAccessor *pBVar7;
  float fVar8;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue
            (aLStack128,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_FLAG_FINAL_VISUAL_SCENE);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_FLAG_CHANGE);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_EDGE_FLAREDUMMY_LINK_NO_TARGET);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    uVar3 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar2,true);
    lib::L2CValue::L2CValue(aLStack112,uVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::sv_battle_object::is_active(uVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
      if (pvVar5 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,pvVar5);
      }
      lib::L2CValue::L2CValue(aLStack96,0x19f190006a);
      lib::L2CValue::L2CValue(aLStack160,0);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl(pBVar7,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack144,iVar2);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x109d30aa1b);
      lib::L2CValue::L2CValue(aLStack176,0xf52fbaed9);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack160,fVar8);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x109d30aa1b);
      lib::L2CValue::L2CValue(aLStack192,0xf6ef69180);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack176,fVar8);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack192,aLStack160);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar4 = lib::L2CValue::operator_(aLStack96,aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack208,aLStack160);
        lib::L2CValue::L2CValue(aLStack224,aLStack176);
        lib::L2CValue::L2CValue(aLStack272,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_FLOAT_POWER);
        iVar2 = lib::L2CValue::as_integer(aLStack272);
        fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack256,fVar8);
        lib::L2CValue::operator_(aLStack256,aLStack144);
        lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::operator_(aLStack192,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
      }
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_FLOAT_SPEED);
      fVar8 = (float)lib::L2CValue::as_number(aLStack256);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack256);
      FUN_710002f270(this);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

