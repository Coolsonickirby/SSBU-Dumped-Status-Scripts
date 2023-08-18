
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucarioAuraball::status::Shoot_main_loop
          (L2CWeaponLucarioAuraball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CAgent *this_00;
  L2CValue *pLVar7;
  float *pfVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  long lVar13;
  L2CValue aLStack288 [16];
  undefined auStack272 [32];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  undefined8 uStack104;
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  pLVar7 = aLStack160;
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,SUB81(pLVar7,0));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack272);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_TOUCH_FLAG_UP);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) == 0) goto LAB_71000040c4;
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_TOUCH_FLAG_UP);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar12 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                       (this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,(float)uVar12);
    lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::operator_(pLVar4,(L2CValue *)auStack272);
    lib::L2CValue::operator_(pLVar5,(L2CValue *)(auStack272 + 0x10));
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar12 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                       (this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,(float)uVar12);
    lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::operator_(pLVar4,(L2CValue *)auStack272);
    lib::L2CValue::operator_(pLVar5,(L2CValue *)(auStack272 + 0x10));
  }
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
LAB_71000040c4:
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  fVar10 = (float)lib::L2CValue::as_number(pLVar4);
  fVar11 = (float)lib::L2CValue::as_number(pLVar5);
  fVar10 = (float)app::sv_math::vec2_length(fVar10,fVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,1e-05);
  uVar6 = lib::L2CValue::operator_((L2CValue *)auStack272,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) != 0) {
    this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CAgent::math_atan(this_00,pLVar4,pLVar7);
    lib::L2CAgent::math_abs((L2CAgent *)auStack272,pLVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe2db7a474);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x10a4ec2fe2);
    pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,(ulong)pLVar7,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,fVar10);
    lib::L2CAgent::math_rad((L2CAgent *)auStack272,pLVar7);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack192);
    uVar6 = lib::L2CValue::operator_(aLStack192,aLStack176);
    if (((uVar6 & 1) != 0) &&
       (uVar6 = lib::L2CValue::operator_(aLStack176,aLStack208), (uVar6 & 1) != 0)) {
      fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar10);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
      lib::L2CValue::operator_((L2CValue *)&local_70,pLVar7);
      lib::L2CValue::L2CValue((L2CValue *)auStack272,-1e-05);
      uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)auStack272);
      lib::L2CValue::_L2CValue((L2CValue *)auStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar6 & 1) != 0) {
        pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue((L2CValue *)auStack272,*pfVar8);
        lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),pfVar8[1]);
        lib::L2CValue::L2CValue(aLStack240,pfVar8[2]);
        FUN_7100004670(aLStack224,this,auStack272);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack272);
        lib::L2CValue::L2CValue(aLStack288,0x15cff20136);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x162d277af);
        HVar9 = lib::L2CValue::as_hash(aLStack288);
        uVar6 = lib::L2CValue::as_number(pLVar7);
        lVar13 = lib::L2CValue::as_number(pLVar4);
        uVar3 = lib::L2CValue::as_number(pLVar5);
        local_60 = uVar6 & 0xffffffff | lVar13 << 0x20;
        uStack88 = (ulong)uVar3;
        uStack104 = LUA_SCRIPT_LINE_STATUS_SHIFT;
        local_70 = LUA_SCRIPT_LINE_STATUS_SYSTEM;
        uVar3 = app::lua_bind::EffectModule__req_impl
                          (this->moduleAccessor,HVar9,(Vector3f *)&local_60,(Vector3f *)&local_70,
                           1.0,0,-1,false,0);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,uVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::L2CValue(aLStack288,0x199c462b5d);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack224);
      }
    }
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

