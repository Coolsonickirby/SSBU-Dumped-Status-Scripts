
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPit::status::SpecialHiRushEnd_exec(L2CFighterPit *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  long lVar14;
  L2CValue aLStack880 [16];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  undefined auStack528 [32];
  L2CValue aLStack496 [16];
  undefined auStack480 [32];
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
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  BattleObjectModuleAccessor *local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_KIND_SPECIAL_HI);
  uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_KIND_SPECIAL_HI_RUSH);
    uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) goto LAB_7100006ccc;
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_INT_RUSH_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_SPEED);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack240,fVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_SDIR_INIT);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack256);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack256,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack272,0x1066a6a23e);
    uVar5 = lib::L2CValue::as_integer(aLStack256);
    uVar6 = lib::L2CValue::as_integer(aLStack272);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    pLVar4 = aLStack192;
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,pLVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar5 & 1) != 0) {
      lib::L2CAgent::math_cos((L2CAgent *)aLStack128,pLVar4);
      lib::L2CValue::operator_(aLStack240,aLStack272);
      pLVar4 = aLStack224;
      lib::L2CValue::operator_((L2CValue *)&local_60,pLVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CAgent::math_sin((L2CAgent *)aLStack128,pLVar4);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_BRAKE_X);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack288,fVar11);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_BRAKE_Y);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack304,fVar11);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::operator_(aLStack256);
        uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack288);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator_(aLStack256,aLStack288);
          lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
        }
      }
      else {
        uVar5 = lib::L2CValue::operator__(aLStack256,aLStack288);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator_(aLStack256,aLStack288);
          lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
        }
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::operator_(aLStack272);
        uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack304);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator_(aLStack272,aLStack304);
          lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
        }
      }
      else {
        uVar5 = lib::L2CValue::operator__(aLStack272,aLStack304);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator_(aLStack272,aLStack304);
          lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
        }
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      fVar11 = (float)lib::L2CValue::as_number(aLStack256);
      fVar12 = (float)lib::L2CValue::as_number(aLStack272);
      fVar11 = (float)app::sv_math::vec2_length(fVar11,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_SPEED)
      ;
      fVar11 = (float)lib::L2CValue::as_number(aLStack320);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_DISTANCE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack256,fVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    pLVar4 = aLStack336;
    lua2cpp::L2CFighterBase::Vector3__create(this,SUB81(pLVar4,0),(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CAgent::math_cos((L2CAgent *)aLStack128,pLVar4);
    lib::L2CValue::operator_(aLStack256,aLStack304);
    pLVar4 = aLStack224;
    lib::L2CValue::operator_((L2CValue *)&local_60,pLVar4);
    lib::L2CAgent::math_sin((L2CAgent *)aLStack128,pLVar4);
    lib::L2CValue::operator_(aLStack256,aLStack320);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x162d277af);
    lib::L2CValue::L2CValue(aLStack416,pLVar4);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.5);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack432,0xf56a247c4);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar6 = lib::L2CValue::as_integer(aLStack432);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack320,fVar11);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar4 = aLStack304;
    lib::L2CValue::operator_(aLStack128,pLVar4);
    lib::L2CAgent::math_cos((L2CAgent *)auStack480,pLVar4);
    lib::L2CValue::operator_(aLStack320,(L2CValue *)(auStack480 + 0x10));
    lib::L2CValue::operator_((L2CValue *)&local_60,aLStack224);
    pLVar4 = aLStack304;
    lib::L2CValue::operator_(aLStack128,pLVar4);
    lib::L2CAgent::math_sin((L2CAgent *)auStack528,pLVar4);
    lib::L2CValue::operator_(aLStack320,(L2CValue *)(auStack528 + 0x10));
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x40,(L2CValue)0x10);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack528 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack480 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack480);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.333);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x18cdc1683);
    lib::L2CValue::operator_((L2CValue *)auStack480,pLVar4);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.333);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x1fbdb2615);
    lib::L2CValue::operator_((L2CValue *)(auStack528 + 0x10),pLVar4);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x162d277af);
    lib::L2CValue::L2CValue(aLStack576,pLVar4);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack528 + 0x10));
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::_L2CValue((L2CValue *)auStack480);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.666);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x18cdc1683);
    lib::L2CValue::operator_((L2CValue *)(auStack528 + 0x10),pLVar4);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.666);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x1fbdb2615);
    lib::L2CValue::operator_((L2CValue *)auStack528,pLVar4);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x162d277af);
    lib::L2CValue::L2CValue(aLStack624,pLVar4);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack624);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack528 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_MOVE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack528 + 0x10),fVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack640,aLStack272);
    lib::L2CValue::L2CValue(aLStack656,(L2CValue *)(auStack480 + 0x10));
    lib::L2CValue::L2CValue(aLStack672,(L2CValue *)auStack480);
    lib::L2CValue::L2CValue(aLStack688,aLStack288);
    lib::L2CValue::operator_((L2CValue *)(auStack528 + 0x10),aLStack256);
    lua2cpp::L2CFighterBase::Vector3__create_bezier_curve
              (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack704);
    lib::L2CValue::_L2CValue(aLStack688);
    lib::L2CValue::_L2CValue(aLStack672);
    lib::L2CValue::_L2CValue(aLStack656);
    lib::L2CValue::_L2CValue(aLStack640);
    lib::L2CValue::operator_((L2CValue *)(auStack528 + 0x10),aLStack240);
    lib::L2CValue::operator_((L2CValue *)(auStack528 + 0x10),(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_((L2CValue *)(auStack528 + 0x10),(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_MOVE);
    fVar11 = (float)lib::L2CValue::as_number(aLStack720);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack720);
    lib::L2CValue::L2CValue(aLStack736,aLStack272);
    lib::L2CValue::L2CValue(aLStack752,(L2CValue *)(auStack480 + 0x10));
    lib::L2CValue::L2CValue(aLStack768,(L2CValue *)auStack480);
    lib::L2CValue::L2CValue(aLStack784,aLStack288);
    lib::L2CValue::operator_((L2CValue *)(auStack528 + 0x10),aLStack256);
    pLVar4 = aLStack752;
    lua2cpp::L2CFighterBase::Vector3__create_bezier_curve
              (this,(L2CValue)0x20,SUB81(pLVar4,0),(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack800);
    lib::L2CValue::_L2CValue(aLStack784);
    lib::L2CValue::_L2CValue(aLStack768);
    lib::L2CValue::_L2CValue(aLStack752);
    lib::L2CValue::_L2CValue(aLStack736);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack720,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack528,0x18cdc1683);
    lib::L2CValue::operator_(pLVar7,pLVar8);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack720,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack528,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar7,pLVar8);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack816);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack832);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack832);
    lib::L2CValue::_L2CValue(aLStack816);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack832,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLAG_FIX_ANGLE);
    iVar3 = lib::L2CValue::as_integer(aLStack832);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack816,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar5 = lib::L2CValue::operator__(aLStack816,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack816);
    lib::L2CValue::_L2CValue(aLStack832);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack832,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLAG_BACK_ANGLE);
      iVar3 = lib::L2CValue::as_integer(aLStack832);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack816,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      uVar5 = lib::L2CValue::operator__(aLStack816,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack816);
      lib::L2CValue::_L2CValue(aLStack832);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack816,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_SDIR);
        iVar3 = lib::L2CValue::as_integer(aLStack816);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
        lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
        goto LAB_7100006b74;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack816,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack816);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar3)
      ;
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack816);
      lib::L2CValue::L2CValue(aLStack816,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack816);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar3)
      ;
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
      lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack816);
      fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
      lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack208,aLStack224);
      lib::L2CAgent::math_atan((L2CAgent *)(auStack160 + 0x10),aLStack816,pLVar4);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack816);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLOAT_SDIR);
      fVar11 = (float)lib::L2CValue::as_number(aLStack816);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar3);
LAB_7100006b74:
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack816);
    }
    pLVar4 = (L2CValue *)0x31d39a761;
    lib::L2CValue::L2CValue(aLStack816,0x31d39a761);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack128,pLVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,90.0);
    lib::L2CValue::operator_((L2CValue *)&local_60,aLStack848);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack864,0.0);
    lib::L2CValue::L2CValue(aLStack880,0.0);
    HVar9 = lib::L2CValue::as_hash(aLStack816);
    uVar5 = lib::L2CValue::as_number(aLStack832);
    lVar14 = lib::L2CValue::as_number(aLStack864);
    uVar13 = lib::L2CValue::as_number(aLStack880);
    local_60 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar14 << 0x20);
    uStack88 = (ulong)uVar13;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar9,(Vector3f *)&local_60,0,0);
    lib::L2CValue::_L2CValue(aLStack880);
    lib::L2CValue::_L2CValue(aLStack864);
    lib::L2CValue::_L2CValue(aLStack832);
    lib::L2CValue::_L2CValue(aLStack848);
    lib::L2CValue::_L2CValue(aLStack816);
    lib::L2CValue::_L2CValue(aLStack720);
    lib::L2CValue::_L2CValue((L2CValue *)auStack528);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack528 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack480);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack480 + 0x10));
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lVar14 = -0xe0;
LAB_7100006cc8:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar14));
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PIT_STATUS_SPECIAL_HI_INT_STOP_Y_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
      uVar5 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        app::sv_kinetic_energy::set_accel(this->luaStateAgent);
        lVar14 = -0xe0;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack288,0x7b9905530);
        uVar5 = lib::L2CValue::as_integer(aLStack272);
        uVar6 = lib::L2CValue::as_integer(aLStack288);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack256,fVar11);
        lib::L2CValue::operator_(aLStack256);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        app::sv_kinetic_energy::set_accel(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack288);
        lVar14 = -0x100;
      }
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar14));
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack256,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack272,0x7ce9765a6);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack272);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack240,fVar11);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      app::sv_kinetic_energy::set_brake(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lVar14 = -0x50;
      goto LAB_7100006cc8;
    }
  }
LAB_7100006ccc:
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_KIND_SPECIAL_HI_RUSH_END);
  uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_KIND_SPECIAL_HI_RUSH);
    uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) goto LAB_7100007150;
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_FLAG_BACK_ANGLE);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((bVar2 & 1U) == 0) goto LAB_7100007150;
  }
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_END_FLOAT_SDIR);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
  ppBVar10 = &local_60;
  lib::L2CValue::operator_(aLStack128,(L2CValue *)ppBVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack128,(L2CValue *)ppBVar10);
  lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,90.0);
  uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,90.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack256,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack272,0xfa7476077);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack272);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack240,fVar11);
      lib::L2CValue::operator_((L2CValue *)auStack160,aLStack240);
      lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,90.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)auStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,90.0);
        lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
        goto LAB_7100006ffc;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack272,0xfa7476077);
    uVar5 = lib::L2CValue::as_integer(aLStack256);
    uVar6 = lib::L2CValue::as_integer(aLStack272);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack240,fVar11);
    lib::L2CValue::operator_((L2CValue *)auStack160,aLStack240);
    lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,90.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,90.0);
      lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
LAB_7100006ffc:
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
  }
  lib::L2CValue::L2CValue(aLStack240,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,90.0);
  lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  pLVar4 = (L2CValue *)lib::L2CValue::as_hash(aLStack240);
  uVar5 = lib::L2CValue::as_number(aLStack256);
  lVar14 = lib::L2CValue::as_number(aLStack272);
  uVar13 = lib::L2CValue::as_number(aLStack288);
  local_60 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar14 << 0x20);
  uStack88 = (ulong)uVar13;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,(Hash40)pLVar4,(Vector3f *)&local_60,0,0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CAgent::math_rad((L2CAgent *)auStack160,pLVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIT_STATUS_SPECIAL_HI_RUSH_END_FLOAT_SDIR);
  fVar11 = (float)lib::L2CValue::as_number(aLStack240);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
LAB_7100007150:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

