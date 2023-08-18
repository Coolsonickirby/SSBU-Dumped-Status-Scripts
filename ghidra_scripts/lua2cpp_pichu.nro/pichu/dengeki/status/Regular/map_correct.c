
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPichuDengeki::status::Regular_map_correct
          (L2CWeaponPichuDengeki *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong *puVar8;
  Hash40 HVar9;
  ulong *in_x2;
  float fVar10;
  undefined8 uVar11;
  long lVar12;
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong auStack96 [2];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::operator_((L2CValue *)(auStack256 + 0x10),aLStack336);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::operator_(aLStack272,aLStack336);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::operator_((L2CValue *)auStack256,aLStack336);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::operator_(aLStack144,aLStack336);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue(aLStack384,_WEAPON_PIKACHU_DENGEKI_INSTANCE_WORK_ID_INT_HITTEST_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack384);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack336,iVar3);
  lib::L2CValue::operator_(aLStack176,aLStack336);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue(aLStack384,_GROUND_TOUCH_FLAG_ALL);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
  lib::L2CValue::L2CValue(aLStack336,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),aLStack336);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack384);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack208 + 0x10));
  if ((bVar2 & 1U) != 0) {
    uVar11 = app::lua_bind::GroundModule__get_correct_pos_local_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack336,(float)uVar11);
    lib::L2CValue::L2CValue(aLStack320,(float)((ulong)uVar11 >> 0x20));
    lib::L2CValue::L2CValue(aLStack384,aLStack336);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack320);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x80,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    lib::L2CValue::operator_((L2CValue *)(auStack256 + 0x10),pLVar6);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack272,pLVar6);
    lib::L2CValue::L2CValue(aLStack400,_GROUND_TOUCH_FLAG_ALL);
    uVar4 = lib::L2CValue::as_integer(aLStack400);
    uVar11 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack384,(float)uVar11);
    lib::L2CValue::L2CValue(aLStack368,(float)((ulong)uVar11 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack384);
    lib::L2CValue::L2CValue((L2CValue *)auStack96,aLStack368);
    in_x2 = auStack96;
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,SUB81(in_x2,0));
    lib::L2CValue::_L2CValue((L2CValue *)auStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack400);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
    lib::L2CValue::operator_((L2CValue *)auStack256,pLVar6);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack144,pLVar6);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack304);
  }
  fVar10 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar10);
  lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack96,_WEAPON_PIKACHU_DENGEKI_INSTANCE_WORK_ID_FLOAT_ATK_CLR_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar10);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  uVar7 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((((uVar7 & 1) == 0) ||
      (uVar7 = lib::L2CValue::operator_(aLStack288,aLStack160), (uVar7 & 1) == 0)) ||
     (bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack208 + 0x10)),
     (bVar2 & 1U) == 0)) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack96);
    puVar8 = auStack96;
  }
  else {
    fVar10 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar10);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    uVar7 = lib::L2CValue::as_number((L2CValue *)(auStack256 + 0x10));
    lVar12 = lib::L2CValue::as_number(aLStack272);
    uVar4 = lib::L2CValue::as_number(aLStack224);
    local_50 = uVar7 & 0xffffffff | lVar12 << 0x20;
    uStack72 = (ulong)uVar4;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
    app::lua_bind::MotionModule__set_frame_impl(this->moduleAccessor,fVar10,true);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar10);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CAgent::math_atan((L2CAgent *)auStack256,aLStack144,(L2CValue *)in_x2);
    lib::L2CValue::operator_((L2CValue *)auStack96,aLStack112);
    puVar8 = &local_50;
    lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)puVar8);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack96);
    lib::L2CAgent::math_deg((L2CAgent *)auStack208,(L2CValue *)puVar8);
    lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)auStack96,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    uVar7 = lib::L2CValue::as_number((L2CValue *)auStack208);
    lVar12 = lib::L2CValue::as_number((L2CValue *)auStack96);
    uVar4 = lib::L2CValue::as_number(aLStack304);
    local_50 = uVar7 & 0xffffffff | lVar12 << 0x20;
    uStack72 = (ulong)uVar4;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)auStack96);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::EffectModule__remove_all_impl(this->moduleAccessor,uVar4,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)auStack96);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KIND_PICHU_DENGEKI);
    uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x14bf6da843);
      lib::L2CValue::operator_((L2CValue *)auStack96,(L2CValue *)&local_50);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1298cac0b2);
      lib::L2CValue::operator_((L2CValue *)auStack96,(L2CValue *)&local_50);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_MA_MSC_CMD_EFFECT_EFFECT_FOLLOW);
    lib::L2CValue::L2CValue(aLStack352,0x655f96687);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    lib::L2CValue::L2CValue(aLStack448,0.0);
    lib::L2CValue::L2CValue(aLStack464,0.0);
    lib::L2CValue::L2CValue(aLStack480,0.0);
    lib::L2CValue::L2CValue(aLStack496,1.0);
    lib::L2CValue::L2CValue(aLStack512,true);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack448);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack464);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack480);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack496);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack512);
    app::sv_module_access::effect(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KIND_PICHU_DENGEKI);
    uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x150d779056);
      lib::L2CValue::operator_((L2CValue *)auStack96,(L2CValue *)&local_50);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13c7eaf5b4);
      lib::L2CValue::operator_((L2CValue *)auStack96,(L2CValue *)&local_50);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack400,_MA_MSC_CMD_EFFECT_EFFECT);
    lib::L2CValue::L2CValue(aLStack416,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    lib::L2CValue::L2CValue(aLStack448,0.0);
    lib::L2CValue::L2CValue(aLStack464,0.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::L2CValue(aLStack496,0.0);
    lib::L2CValue::L2CValue(aLStack512,1.0);
    lib::L2CValue::L2CValue(aLStack528,0.0);
    lib::L2CValue::L2CValue(aLStack544,0.0);
    lib::L2CValue::L2CValue(aLStack560,0.0);
    lib::L2CValue::L2CValue(aLStack576,0.0);
    lib::L2CValue::L2CValue(aLStack592,0.0);
    lib::L2CValue::L2CValue(aLStack608,0.0);
    lib::L2CValue::L2CValue(aLStack624,false);
    FUN_7100028110(aLStack352,this,aLStack400,auStack96,aLStack416,aLStack432,aLStack448,aLStack464,
                   aLStack480,&local_50,aLStack496,aLStack512,aLStack528,aLStack544,aLStack560,
                   aLStack576,aLStack592,aLStack608,aLStack624);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack624);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    FUN_71000282a0(this);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack400,0xe5dbb7ef8);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    HVar9 = lib::L2CValue::as_hash(aLStack400);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar9,-1)
    ;
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack96);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_50);
    puVar8 = &local_50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)puVar8);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_PIKACHU_DENGEKI_INSTANCE_WORK_ID_INT_HITTEST_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

