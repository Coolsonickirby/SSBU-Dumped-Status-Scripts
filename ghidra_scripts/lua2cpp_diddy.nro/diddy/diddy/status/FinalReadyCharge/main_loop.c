
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalReadyCharge_main_loop(L2CFighterDiddy *this,L2CValue *return_value)

{
  int iVar1;
  float *pfVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *this_00;
  lua_State *plVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
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
  ulong local_60;
  ulong uStack88;
  
  pfVar2 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,*pfVar2);
  lib::L2CValue::L2CValue(aLStack144,pfVar2[1]);
  fVar9 = 0.0;
  lib::L2CValue::L2CValue(aLStack128,pfVar2[2]);
  FUN_710001a810(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_STAGE_KIRIFUDA_KIND_IKE_1);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  plVar5 = this->luaStateAgent;
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar7 = app::sv_fighter_util::get_kirifuda_position(plVar5,iVar1);
  lib::L2CValue::L2CValue(aLStack224,(float)uVar7);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar7 >> 0x20));
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  FUN_710001a810(aLStack176,this,aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack240,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack240);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
    uVar4 = lib::L2CValue::as_number(pLVar3);
    lVar8 = lib::L2CValue::as_number(aLStack240);
    uVar6 = lib::L2CValue::as_number(this_00);
    local_60 = uVar4 & 0xffffffff | lVar8 << 0x20;
    uStack88 = (ulong)uVar6;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_KIND_FINAL_CHARGE);
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

