
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710006d3b0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
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
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  ppBVar7 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  fVar8 = (float)app::lua_bind::ModelModule__scale_z_impl(*ppBVar7);
  lib::L2CValue::L2CValue(aLStack80,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
  uVar5 = lib::L2CValue::operator<(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    return;
  }
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
  lib::L2CValue::L2CValue(aLStack80,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
  uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
LAB_710006d4e8:
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
    uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    if ((uVar5 & 1) != 0) goto LAB_710006dc08;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_FLAG_IS_L);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
    uVar5 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_FLAG_IS_L);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_FLAG_IS_L);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
    uVar5 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_710006d4e8;
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_FLAG_IS_L);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_GAUGE_EFFECT_HANDLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,
             _FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_MATERIAL_EFFECT_HANDLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,
             _FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_GAUGE_SUCCESS_EFFECT_HANDLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack144,0x11a675911d);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack160,0x11d172a18b);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack176,0x11487bf031);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack160,fVar8);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack192,0x10e97d25f8);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack176,fVar8);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack208,0x109e7a156e);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar6 = lib::L2CValue::as_integer(aLStack208);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack192,fVar8);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack224,0x10077344d4);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar6 = lib::L2CValue::as_integer(aLStack224);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar8);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack240,0x1918a295b6);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar6 = lib::L2CValue::as_integer(aLStack240);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack224,fVar8);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack256,0x196fa5a520);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar6 = lib::L2CValue::as_integer(aLStack256);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack240,fVar8);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack272,0x19f6acf49a);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar6 = lib::L2CValue::as_integer(aLStack272);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack256,fVar8);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_FLAG_IS_L);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack272);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::operator-(aLStack128);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::operator-(aLStack176);
    lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::operator-(aLStack224);
    lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  }
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar9 = lib::L2CValue::as_number(aLStack128);
  uVar10 = lib::L2CValue::as_number(aLStack144);
  uVar11 = lib::L2CValue::as_number(aLStack160);
  local_40 = CONCAT44(uVar10,uVar9);
  uStack56 = (ulong)uVar11;
  app::lua_bind::EffectModule__set_pos_impl(*ppBVar7,uVar4,(Vector3f *)&local_40);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar9 = lib::L2CValue::as_number(aLStack176);
  uVar10 = lib::L2CValue::as_number(aLStack192);
  uVar11 = lib::L2CValue::as_number(aLStack208);
  local_40 = CONCAT44(uVar10,uVar9);
  uStack56 = (ulong)uVar11;
  app::lua_bind::EffectModule__set_pos_impl(*ppBVar7,uVar4,(Vector3f *)&local_40);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar9 = lib::L2CValue::as_number(aLStack224);
  uVar10 = lib::L2CValue::as_number(aLStack240);
  uVar11 = lib::L2CValue::as_number(aLStack256);
  local_40 = CONCAT44(uVar10,uVar9);
  uStack56 = (ulong)uVar11;
  app::lua_bind::EffectModule__set_pos_impl(*ppBVar7,uVar4,(Vector3f *)&local_40);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710006dc08:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

