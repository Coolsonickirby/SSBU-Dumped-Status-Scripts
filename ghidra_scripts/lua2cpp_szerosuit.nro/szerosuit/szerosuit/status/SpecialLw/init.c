
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSzerosuit::status::SpecialLwKickLanding_init
          (L2CFighterSzerosuit *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  L2CValue aLStack288 [16];
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
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_SZEROSUIT_AREA_KIND_TREAD);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::AreaModule__enable_area_impl(this->moduleAccessor,iVar1,true,-1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SZEROSUIT_AREA_KIND_TREAD);
  lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack144,0x112717ada6);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack192,0x1150109d30);
  uVar2 = lib::L2CValue::as_integer(aLStack176);
  uVar3 = lib::L2CValue::as_integer(aLStack192);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar4);
  lib::L2CValue::L2CValue(aLStack224,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack240,0x11b7a8b037);
  uVar2 = lib::L2CValue::as_integer(aLStack224);
  uVar3 = lib::L2CValue::as_integer(aLStack240);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack208,fVar4);
  lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack288,0x113aa0bdc2);
  uVar2 = lib::L2CValue::as_integer(aLStack272);
  uVar3 = lib::L2CValue::as_integer(aLStack288);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack256,fVar4);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_number(aLStack112);
  uVar6 = lib::L2CValue::as_number(aLStack160);
  local_40 = CONCAT44(uVar6,uVar5);
  uStack56 = 0;
  uVar5 = lib::L2CValue::as_number(aLStack208);
  uVar6 = lib::L2CValue::as_number(aLStack256);
  local_50 = CONCAT44(uVar6,uVar5);
  uStack72 = 0;
  app::lua_bind::AreaModule__set_area_shape_aabb_impl
            (this->moduleAccessor,iVar1,(Vector2f *)&local_40,(Vector2f *)&local_50);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

