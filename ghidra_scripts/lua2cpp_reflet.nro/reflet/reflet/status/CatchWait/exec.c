
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::CatchWait_exec(L2CFighterReflet *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_CATCH_EFFECT_HANDLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1);
  uVar5 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar5 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,LINK_NO_CAPTURE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,uVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar4 = app::sv_battle_object::category(uVar4);
      lib::L2CValue::L2CValue(aLStack128,uVar4 & 0xff);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_BATTLE_OBJECT_CATEGORY_FIGHTER);
      uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar6 == (void *)0x0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_40,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_40,pvVar6);
        }
        lib::L2CValue::L2CValue(aLStack144,0xc28b70a0b);
        lib::L2CValue::L2CValue(aLStack160,0);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        uVar7 = lib::L2CValue::as_integer(aLStack160);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_40);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar8,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack128,fVar9);
        lib::L2CValue::operator_(aLStack112,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      }
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      uVar10 = lib::L2CValue::as_number(aLStack112);
      uVar11 = lib::L2CValue::as_number(aLStack112);
      uVar12 = lib::L2CValue::as_number(aLStack112);
      local_40 = CONCAT44(uVar11,uVar10);
      uStack56 = (ulong)uVar12;
      app::lua_bind::EffectModule__set_scale_impl(this->moduleAccessor,uVar4,(Vector3f *)&local_40);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

