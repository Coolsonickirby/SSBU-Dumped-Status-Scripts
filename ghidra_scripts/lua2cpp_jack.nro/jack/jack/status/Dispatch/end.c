
void __thiscall L2CFighterJack::status::Dispatch_end(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  long lVar6;
  long lVar7;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack96,0x198c378d09);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack64,iVar2);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::HitModule__set_xlu_frame_global_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,0x47f6fc330);
  lib::L2CValue::L2CValue(aLStack80,false);
  HVar5 = lib::L2CValue::as_hash(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::VisibilityModule__set_material_anim_priority_impl
            (this->moduleAccessor,HVar5,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x47f6fc330);
  lib::L2CValue::L2CValue(aLStack80,0x209b629c8);
  lVar6 = lib::L2CValue::as_integer(aLStack64);
  lVar7 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_status_default_int64_impl(this->moduleAccessor,lVar6,lVar7);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

