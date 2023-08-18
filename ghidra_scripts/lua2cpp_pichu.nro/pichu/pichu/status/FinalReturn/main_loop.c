
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPichu::status::FinalReturn_main_loop(L2CFighterPichu *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float *pfVar5;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  L2CValue aLStack336 [16];
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
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack320,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack208,0x12d2d373e0);
  uVar2 = lib::L2CValue::as_integer(aLStack320);
  uVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_FLOAT_HIT_POS_X);
  iVar1 = lib::L2CValue::as_integer(aLStack320);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack144,fVar6);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PIKACHU_STATUS_FINAL_WORK_FLOAT_HIT_POS_Y);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack160,fVar6);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack320);
  uVar8 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,(float)uVar8);
  lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar8 >> 0x20));
  lib::L2CValue::L2CValue(aLStack320,aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack192);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::operator_(aLStack128,aLStack176);
  lib::L2CValue::L2CValue(aLStack256,aLStack224);
  lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack256);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack320,30.0);
  uVar2 = lib::L2CValue::operator__(aLStack320,pLVar4);
  lib::L2CValue::_L2CValue(aLStack320);
  if ((uVar2 & 1) == 0) {
    uVar2 = lib::L2CValue::operator__(aLStack240,aLStack112);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack320,*pfVar5);
      lib::L2CValue::L2CValue(aLStack304,pfVar5[1]);
      lib::L2CValue::L2CValue(aLStack288,pfVar5[2]);
      FUN_710001af90(aLStack272,this,aLStack320);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x162d277af);
      uVar2 = lib::L2CValue::as_number(pLVar4);
      lVar9 = lib::L2CValue::as_number(this_00);
      uVar7 = lib::L2CValue::as_number(this_01);
      local_60 = uVar2 & 0xffffffff | lVar9 << 0x20;
      uStack88 = (ulong)uVar7;
      app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIKACHU_STATUS_KIND_FINAL_END);
      lib::L2CValue::L2CValue(aLStack336,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack272);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PIKACHU_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

