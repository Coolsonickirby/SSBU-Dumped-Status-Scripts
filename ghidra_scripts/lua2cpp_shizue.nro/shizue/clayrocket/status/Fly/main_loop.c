
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponShizueClayrocket::status::Fly_main_loop
          (L2CWeaponShizueClayrocket *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CAgent *this_00;
  float *pfVar8;
  L2CValue *this_01;
  void ***pppvVar9;
  float fVar10;
  undefined8 uVar11;
  long lVar12;
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  void **local_50;
  lua_State *plStack72;
  
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_SHIZUE_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_DAMAGE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,fVar10);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0x419cd3efe);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xadb79366e);
    uVar6 = lib::L2CValue::operator__(pLVar7,pLVar5);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_GROUND_TOUCH_FLAG_UP_SIDE);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack160 + 0x10),_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack160 + 0x10));
        uVar11 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack128,(float)uVar11);
        lib::L2CValue::L2CValue(aLStack112,(float)((ulong)uVar11 >> 0x20));
        lib::L2CValue::L2CValue(aLStack208,aLStack128);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack112);
        pppvVar9 = &local_50;
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x30,SUB81(pppvVar9,0));
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
        this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
        lib::L2CAgent::math_atan(this_00,pLVar5,(L2CValue *)pppvVar9);
        lib::L2CAgent::math_deg((L2CAgent *)auStack160,pLVar5);
        lib::L2CValue::L2CValue(aLStack208,0x5a);
        lib::L2CValue::operator_((L2CValue *)&local_50,aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)auStack160);
        pfVar8 = (float *)app::lua_bind::PostureModule__rot_impl(this->moduleAccessor,0);
        lib::L2CValue::L2CValue(aLStack208,*pfVar8);
        lib::L2CValue::L2CValue(aLStack192,pfVar8[1]);
        lib::L2CValue::L2CValue(aLStack176,pfVar8[2]);
        FUN_7100008290(auStack160,this,aLStack208);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0x10d78ab4d3);
        lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0x1130055161);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar6,(ulong)pLVar5);
        lib::L2CValue::L2CValue(aLStack224,fVar10);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x162d277af);
        lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),pLVar7);
        lib::L2CValue::operator_(aLStack224);
        lib::L2CAgent::math_max((L2CAgent *)auStack256,aLStack272,pLVar5);
        lib::L2CAgent::math_min((L2CAgent *)&local_50,aLStack224,pLVar5);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue((L2CValue *)auStack256);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
        this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x162d277af);
        lib::L2CValue::operator_(this_01,(L2CValue *)(auStack256 + 0x10));
        uVar6 = lib::L2CValue::as_number(pLVar5);
        lVar12 = lib::L2CValue::as_number(pLVar7);
        uVar4 = lib::L2CValue::as_number((L2CValue *)auStack256);
        local_50 = (void **)(uVar6 & 0xffffffff | lVar12 << 0x20);
        plStack72 = (lua_State *)(ulong)uVar4;
        app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
        lib::L2CValue::_L2CValue((L2CValue *)auStack256);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)auStack160);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
        lib::L2CValue::_L2CValue(aLStack96);
        return;
      }
      lib::L2CValue::L2CValue(aLStack208,_WEAPON_SHIZUE_CLAYROCKET_STATUS_KIND_BURST);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,_WEAPON_SHIZUE_CLAYROCKET_STATUS_KIND_BURST);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_SHIZUE_CLAYROCKET_INSTANCE_WORK_ID_FLAG_BURST_DAMAGE)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_SHIZUE_CLAYROCKET_STATUS_KIND_BURST);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x80);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

