
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSnakeNikitamissile::status::StopFall_main_loop
          (L2CWeaponSnakeNikitamissile *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Weapon *pWVar7;
  float *pfVar8;
  L2CValue *pLVar9;
  float fVar10;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_FLOAT_HP);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,fVar10);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar5 = lib::L2CValue::operator__(aLStack192,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_ALL);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      return;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pWVar7 = (Weapon *)lib::L2CValue::as_pointer(pLVar6);
  uVar4 = app::lua_bind::Weapon__get_founder_id_impl(pWVar7);
  lib::L2CValue::L2CValue(aLStack192,uVar4);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  pfVar8 = (float *)app::sv_battle_object::pos(uVar4);
  lib::L2CValue::L2CValue(aLStack144,*pfVar8);
  lib::L2CValue::L2CValue(aLStack128,pfVar8[1]);
  lib::L2CValue::L2CValue(aLStack112,pfVar8[2]);
  FUN_7100018740(aLStack80,this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack192);
  pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,*pfVar8);
  lib::L2CValue::L2CValue(aLStack176,pfVar8[1]);
  lib::L2CValue::L2CValue(aLStack160,pfVar8[2]);
  FUN_7100018740(aLStack96,this,aLStack192);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  uVar5 = lib::L2CValue::operator_(pLVar6,pLVar9);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack208,-1.0);
    fVar10 = (float)lib::L2CValue::as_number(aLStack208);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar10);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,1.0);
    fVar10 = (float)lib::L2CValue::as_number(aLStack208);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar10);
  }
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_KIND_EXPLOSION);
  lib::L2CValue::L2CValue(aLStack224,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

