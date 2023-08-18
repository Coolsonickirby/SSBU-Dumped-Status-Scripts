
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKirby::status::Walk_init(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
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
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack288,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_PICKEL);
    uVar3 = lib::L2CValue::operator__(aLStack288,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      FUN_7100222af0(aLStack96,this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xee2ec2860);
        lib::L2CValue::L2CValue(aLStack112,0);
        uVar3 = lib::L2CValue::as_integer(aLStack96);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar3,uVar4);
        lib::L2CValue::L2CValue(aLStack80,fVar5);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,aLStack80);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        lib::L2CValue::L2CValue(aLStack160,0x9fece0d5d);
        lib::L2CValue::L2CValue(aLStack176,0xb4fb275bd);
        lib::L2CValue::L2CValue(aLStack192,0x9eeaf3544);
        lua2cpp::L2CFighterCommon::init_walk_speed
                  (this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60,
                   (L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack208,0x9fece0d5d);
        lib::L2CValue::L2CValue(aLStack224,0xb4fb275bd);
        lib::L2CValue::L2CValue(aLStack240,0x9eeaf3544);
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
        lib::L2CValue::L2CValue(aLStack272,1.0);
        lua2cpp::L2CFighterCommon::init_walk_motion
                  (this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        app::lua_bind::CameraModule__set_run_impl(this->moduleAccessor,0);
      }
      else {
        lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init(this);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack288);
      return;
    }
    lib::L2CValue::_L2CValue(aLStack288);
  }
  lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

