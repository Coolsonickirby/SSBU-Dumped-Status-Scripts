
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponToonlinkAncientbowarrow::status::Stick_main_loop
          (L2CWeaponToonlinkAncientbowarrow *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  Hash40 HVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_ANCIENTBOWARROW_INSTANCE_WORK_ID_INT_STICK_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
  uVar5 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_40);
    app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_WEAPON_LINK_ANCIENTBOWARROW_INSTANCE_WORK_ID_INT_HIT_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  if ((uVar5 & 1) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_7100003080;
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar6);
    }
    lib::L2CValue::L2CValue(aLStack112,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,90.0);
    lib::L2CValue::operator_((L2CValue *)&local_40,aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    uVar10 = lib::L2CValue::as_number(aLStack128);
    uVar11 = lib::L2CValue::as_number(aLStack144);
    uVar4 = lib::L2CValue::as_number(aLStack176);
    local_40 = CONCAT44(uVar11,uVar10);
    uStack56 = (ulong)uVar4;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar7,(Vector3f *)&local_40,0,0);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0x151e00717a);
    lib::L2CValue::L2CValue(aLStack128,0xcc6453c63);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    uVar8 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar8)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    uVar10 = lib::L2CValue::as_number(aLStack128);
    uVar11 = lib::L2CValue::as_number(aLStack144);
    uVar4 = lib::L2CValue::as_number(aLStack112);
    local_40 = CONCAT44(uVar11,uVar10);
    uStack56 = (ulong)uVar4;
    app::lua_bind::LinkModule__set_constraint_translate_offset_impl
              (this->moduleAccessor,(Vector3f *)&local_40);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100003080:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

