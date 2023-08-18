
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterArrow2::status::Stay_main_loop(L2CWeaponMasterArrow2 *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  float *pfVar7;
  L2CValue *pLVar8;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
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
  ulong local_80;
  ulong uStack120;
  ulong local_70;
  ulong uStack104;
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack192,false);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_70,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0x11a4fa64fc);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
    HVar6 = lib::L2CValue::as_hash(aLStack192);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_70);
    bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_80);
    app::lua_bind::EffectModule__kill_kind_impl
              (this->moduleAccessor,HVar6,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack192);
    FUN_71000058f0(this);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_MASTER_ARROW1_STATUS_WORK_ID_FLAG_HIT_GROUND);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((bVar3 & 1U) != 0) {
      pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack192,*pfVar7);
      lib::L2CValue::L2CValue(aLStack176,pfVar7[1]);
      lib::L2CValue::L2CValue(aLStack160,pfVar7[2]);
      FUN_7100005230(aLStack144,this,aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_END_POS_X);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_END_POS_Y);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue(aLStack224,0xfa06bb067);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x162d277af);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,1.0);
      lib::L2CValue::L2CValue(aLStack304,EFFECT_SUB_ATTRIBUTE_NONE);
      lib::L2CValue::L2CValue(aLStack320,-1);
      HVar6 = lib::L2CValue::as_hash(aLStack224);
      uVar5 = lib::L2CValue::as_number(pLVar8);
      lVar11 = lib::L2CValue::as_number(this_00);
      uVar10 = lib::L2CValue::as_number(this_01);
      local_70 = uVar5 & 0xffffffff | lVar11 << 0x20;
      uStack104 = (ulong)uVar10;
      uVar5 = lib::L2CValue::as_number(aLStack240);
      lVar11 = lib::L2CValue::as_number(aLStack256);
      uVar10 = lib::L2CValue::as_number(aLStack272);
      local_80 = uVar5 & 0xffffffff | lVar11 << 0x20;
      uStack120 = (ulong)uVar10;
      fVar9 = (float)lib::L2CValue::as_number(aLStack288);
      uVar10 = lib::L2CValue::as_integer(aLStack304);
      iVar4 = lib::L2CValue::as_integer(aLStack320);
      uVar10 = app::lua_bind::EffectModule__req_impl
                         (this->moduleAccessor,HVar6,(Vector3f *)&local_70,(Vector3f *)&local_80,
                          fVar9,uVar10,iVar4,false,0);
      lib::L2CValue::L2CValue(aLStack208,uVar10);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

