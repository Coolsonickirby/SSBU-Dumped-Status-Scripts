
void __thiscall L2CFighterJack::status::Summon_end(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x47f6fc330);
  lib::L2CValue::L2CValue(aLStack80,false);
  HVar3 = lib::L2CValue::as_hash(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::VisibilityModule__set_material_anim_priority_impl
            (this->moduleAccessor,HVar3,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack96,0x198c378d09);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack64,iVar2);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::HitModule__set_xlu_frame_global_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::EffectModule__enable_stencil_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

