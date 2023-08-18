
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPacman::status::CatchWait_exec(L2CFighterPacman *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *this_00;
  float fVar6;
  uint uVar7;
  L2CValue aLStack192 [16];
  ulong auStack176 [2];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CATCH_EFFECT_HANDLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar4 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) != 0) goto LAB_710001a28c;
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CATCH_EFFECT_FRAME);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLOAT_CATCH_EFFECT_LENGTH);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,fVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x126905af8d);
  lib::L2CValue::L2CValue(aLStack160,0xc75fd82ba);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack144,fVar6);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x126905af8d);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0xcc69ac449);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack176);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack160,fVar6);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator_(aLStack128,aLStack160);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  uVar4 = lib::L2CValue::operator_(aLStack144,aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar4 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
      lib::L2CValue::operator_(aLStack128);
      uVar2 = lib::L2CValue::as_integer(aLStack96);
      uVar4 = lib::L2CValue::as_number((L2CValue *)auStack176);
      uVar7 = lib::L2CValue::as_number(aLStack192);
      local_50 = uVar4 & 0xffffffff | (ulong)uVar7 << 0x20;
      uStack72 = 0;
      app::lua_bind::EffectModule__set_custom_uv_offset_impl
                (this->moduleAccessor,uVar2,(Vector2f *)&local_50,0);
      goto LAB_710001a168;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar2,true,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack176,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CATCH_EFFECT_HANDLE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    this_00 = &local_50;
  }
  else {
    lib::L2CValue::operator_(aLStack128,aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
    lib::L2CValue::operator_(aLStack128);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    uVar4 = lib::L2CValue::as_number((L2CValue *)auStack176);
    uVar7 = lib::L2CValue::as_number(aLStack192);
    local_50 = uVar4 & 0xffffffff | (ulong)uVar7 << 0x20;
    uStack72 = 0;
    app::lua_bind::EffectModule__set_custom_uv_offset_impl
              (this->moduleAccessor,uVar2,(Vector2f *)&local_50,0);
LAB_710001a168:
    lib::L2CValue::_L2CValue(aLStack192);
    this_00 = auStack176;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLOAT_CATCH_EFFECT_LENGTH);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)auStack176);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710001a28c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

