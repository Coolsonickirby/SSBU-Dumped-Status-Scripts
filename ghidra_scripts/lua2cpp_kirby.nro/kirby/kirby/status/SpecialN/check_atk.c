
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNLoop_check_atk(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  L2CValue *pLVar9;
  L2CValue *in_x1;
  L2CValue *in_x2;
  float fVar10;
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack336,in_x1);
  lib::L2CValue::L2CValue(aLStack352,in_x2);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x5d6e20d24);
  lib::L2CValue::L2CValue(aLStack96,pLVar5);
  lib::L2CValue::L2CValue(aLStack176,COLLISION_KIND_HIT);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,COLLISION_KIND_SHIELD);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar6 & 1) == 0) goto LAB_7100008fb4;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack176,false);
  uVar6 = lib::L2CValue::operator__(aLStack176,(L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
    lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0x17b8d11bc4);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,0);
    uVar6 = lib::L2CValue::operator_(aLStack176,aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar6 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0xa854977fe);
      uVar3 = lib::L2CValue::as_integer(pLVar5);
      pfVar8 = (float *)app::sv_battle_object::pos(uVar3);
      lib::L2CValue::L2CValue(aLStack176,*pfVar8);
      lib::L2CValue::L2CValue(aLStack160,pfVar8[1]);
      lib::L2CValue::L2CValue(aLStack144,pfVar8[2]);
      FUN_7100009380(aLStack128,this,aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),*pfVar8);
      lib::L2CValue::L2CValue(aLStack224,pfVar8[1]);
      lib::L2CValue::L2CValue(aLStack208,pfVar8[2]);
      FUN_7100009380(aLStack192,this,auStack256 + 0x10);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      lib::L2CValue::operator_(pLVar5,pLVar9);
      lib::L2CValue::L2CValue(aLStack288,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack304,0x1af29f72c7);
      pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack288);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,(ulong)pLVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack272,fVar10);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CAgent::math_abs((L2CAgent *)auStack256,pLVar5);
      fVar10 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack320,fVar10);
      lib::L2CValue::operator_(aLStack272,aLStack320);
      uVar6 = lib::L2CValue::operator__(aLStack288,aLStack304);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack288);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack288,0);
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_SPECIAL_N_HIT_NEAR_COUNT);
        iVar2 = lib::L2CValue::as_integer(aLStack288);
        iVar4 = lib::L2CValue::as_integer(aLStack304);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_SPECIAL_N_HIT_NEAR_COUNT);
        iVar2 = lib::L2CValue::as_integer(aLStack304);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack288,iVar2);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack288);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack288,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_SPECIAL_N_HIT_NEAR_COUNT);
          iVar2 = lib::L2CValue::as_integer(aLStack288);
          app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
        }
        else {
          lib::L2CValue::L2CValue(aLStack304,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack320,0x17322ea150);
          uVar6 = lib::L2CValue::as_integer(aLStack304);
          uVar7 = lib::L2CValue::as_integer(aLStack320);
          fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack288,fVar10);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::L2CValue(aLStack304,FIGHTER_INSTANCE_WORK_ID_FLOAT_REBOUND_ATTACK_SPEED);
          fVar10 = (float)lib::L2CValue::as_number(aLStack288);
          iVar2 = lib::L2CValue::as_integer(aLStack304);
          app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar2);
          lib::L2CValue::_L2CValue(aLStack304);
        }
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::L2CValue(aLStack304,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack320,0x1788f0636b);
        uVar6 = lib::L2CValue::as_integer(aLStack304);
        uVar7 = lib::L2CValue::as_integer(aLStack320);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack288,iVar2);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::L2CValue
                  (aLStack304,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_SPECIAL_N_HIT_NEAR_FRAME);
        iVar2 = lib::L2CValue::as_integer(aLStack288);
        iVar4 = lib::L2CValue::as_integer(aLStack304);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
      }
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)auStack256);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
LAB_7100008fb4:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  return;
}

